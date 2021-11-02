#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64) 
    #define WINDOWS
    #include <conio.h>

#elif defined(unix)
    #define UNIX
    char getch(void);
#else
    #error "Platform is not supported"
#endif

void clear (void) {
    #ifdef WINDOWS
        printf("\033[2J");
        printf("\033[0;0f");
    #else
        system("clear");
    #endif
}

#ifdef UNIX
    char getch (void) {
        char ch;
        system("stty raw");
        ch = getchar();
        system("stty cooked");
        return ch;
    }
#endif

enum {Y = 7, X = 13};
typedef enum {false, true} bool;

enum State { ZERO = 'O', CROSS = 'X' };
static enum State now = CROSS;

static char map[Y][X] = {
    "=============",
    "| 7 | 8 | 9 |",
    "=============",
    "| 4 | 5 | 6 |",
    "=============",
    "| 1 | 2 | 3 |",
    "============="
};

#define NUM1 map[5][2]
#define NUM2 map[5][6]
#define NUM3 map[5][10]
#define NUM4 map[3][2]
#define NUM5 map[3][6]
#define NUM6 map[3][10]
#define NUM7 map[1][2]
#define NUM8 map[1][6]
#define NUM9 map[1][10]

#define CHANGE(x) (x = now)
#define GOTO(x) if(x == ZERO || x == CROSS) goto again; else CHANGE(x);

static void menu (void);
static void game (void);

static void printMap (void);
static bool checkWin (void);

static void restart (void);

int main (void) {
    menu();
    return 0;
}

static void menu (void) {
    auto char symbol;
    start:
        clear();

        printf("\v\tPRESS '1' TO START GAME\n");
        printf("\tPRESS '0' TO STOP GAME\n");
        printf("\t> ");

    restart:
        symbol = getch();

    switch(symbol) {
        case '1': game(); break;
        case '0': printf("\n\n"); return;
        default: goto start;
    }

    restart();

    printf("\v\tPRESS '1' TO PLAY AGAIN\n");
    printf("\tPRESS '0' TO STOP GAME\n");
    printf("\t> ");

    goto restart;
}

static void restart (void) {
    now = CROSS;
    NUM7 = '7'; NUM8 = '8'; NUM9 = '9';
    NUM4 = '4'; NUM5 = '5'; NUM6 = '6';
    NUM1 = '1'; NUM2 = '2'; NUM3 = '3';
}

static void game (void) {
    auto char symbol;
    while(true) {
        again:
            printMap();
            printf("\v\t Number > ");

            symbol = getch();

        switch(symbol) {
            case '0': printf("\n\n"); return;
            case '1': GOTO(NUM1);   break;
            case '2': GOTO(NUM2);   break;
            case '3': GOTO(NUM3);   break;
            case '4': GOTO(NUM4);   break;
            case '5': GOTO(NUM5);   break;
            case '6': GOTO(NUM6);   break;
            case '7': GOTO(NUM7);   break;
            case '8': GOTO(NUM8);   break;
            case '9': GOTO(NUM9);   break;
            default: goto again;
        }

        if (checkWin()) return;

        if (now == CROSS) now = ZERO;
        else now = CROSS;
    }
}

static void printMap (void) {
    auto unsigned char x, y;
    
    clear(); printf("\n\v");

    for (y = 0; y < 7; y++) {
        printf("\t");
        for (x = 0; x < 13; x++)
            printf("%c", map[y][x]);
        printf("\n");
    }
}

static bool checkWin (void) {
    auto bool win = false;
    auto char temp;

    /* HORIZONTAL */

    if ((NUM7 == ZERO && NUM8 == ZERO && NUM9 == ZERO)||
        (NUM7 == CROSS && NUM8 == CROSS && NUM9 == CROSS)
    ) {
        temp = NUM7; NUM7 = NUM8 = NUM9 = '-'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    if ((NUM4 == ZERO && NUM5 == ZERO && NUM6 == ZERO)||
        (NUM4 == CROSS && NUM5 == CROSS && NUM6 == CROSS)
    ) {
        temp = NUM4; NUM4 = NUM5 = NUM6 = '-'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    if ((NUM1 == ZERO && NUM2 == ZERO && NUM3 == ZERO)||
        (NUM1 == CROSS && NUM2 == CROSS && NUM3 == CROSS)
    ) {
        temp = NUM1; NUM1 = NUM2 = NUM3 = '-'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    /* VERTICAL */

    if ((NUM7 == ZERO && NUM4 == ZERO && NUM1 == ZERO)||
        (NUM7 == CROSS && NUM4 == CROSS && NUM1 == CROSS)
    ) {
        temp = NUM7; NUM7 = NUM4 = NUM1 = '|'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    if ((NUM8 == ZERO && NUM5 == ZERO && NUM2 == ZERO)||
        (NUM8 == CROSS && NUM5 == CROSS && NUM2 == CROSS)
    ) {
        temp = NUM8; NUM8 = NUM5 = NUM2 = '|'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    if ((NUM9 == ZERO && NUM6 == ZERO && NUM3 == ZERO)||
        (NUM9 == CROSS && NUM6 == CROSS && NUM3 == CROSS)
    ) {
        temp = NUM9; NUM9 = NUM6 = NUM3 = '|'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    /* DIAGONAL */

    if ((NUM7 == ZERO && NUM5 == ZERO && NUM3 == ZERO)||
        (NUM7 == CROSS && NUM5 == CROSS && NUM3 == CROSS)
    ) {
        temp = NUM7; NUM7 = NUM5 = NUM3 = '\\'; printMap();
        printf("\n\t  WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    if ((NUM9 == ZERO && NUM5 == ZERO && NUM1 == ZERO)||
        (NUM9 == CROSS && NUM5 == CROSS && NUM1 == CROSS)
    ) {
        temp = NUM9; NUM9 = NUM5 = NUM1 = '/'; printMap();
        printf("\n\t WIN: %s\n\n",(temp == ZERO)?"  ZERO":" CROSS");
        win = true;
    }

    return win;
}
