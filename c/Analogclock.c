#include <graphics.h>
#include <time.h>
#include <math.h>
#include <dos.h>

#define PI 3.14159

void drawClock(int x, int y, int r) {
    circle(x, y, r); // Clock border
    for (int i = 0; i < 12; i++) {
        int angle = i * 30;
        int tx = x + (r - 10) * cos(angle * PI / 180);
        int ty = y - (r - 10) * sin(angle * PI / 180);
        char num[3];
        sprintf(num, "%d", i == 0 ? 12 : i);
        outtextxy(tx, ty, num);
    }
}

void drawHands(int x, int y, int r, int h, int m, int s) {
    float angle_s = (s * 6) * PI / 180;
    float angle_m = (m * 6 + s * 0.1) * PI / 180;
    float angle_h = (h * 30 + m * 0.5) * PI / 180;

    line(x, y, x + r * 0.8 * sin(angle_h), y - r * 0.8 * cos(angle_h)); // Hour
    line(x, y, x + r * 0.9 * sin(angle_m), y - r * 0.9 * cos(angle_m)); // Minute
    line(x, y, x + r * sin(angle_s), y - r * cos(angle_s));             // Second
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 300, y = 240, r = 100;

    while (!kbhit()) {
        cleardevice();
        drawClock(x, y, r);

        struct tm *current;
        time_t now;
        time(&now);
        current = localtime(&now);

        drawHands(x, y, r, current->tm_hour, current->tm_min, current->tm_sec);
        delay(1000);
    }

    closegraph();
    return 0;
}
