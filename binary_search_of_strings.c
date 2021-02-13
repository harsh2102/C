#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define LENGTH 50
void descending(char [ROWS][LENGTH]);
void ascending(char [ROWS][LENGTH]);
void display(void);

int main(){
    int start, end, mid, t1, t2;
    char s[ROWS][LENGTH];
    char s2[ROWS][LENGTH];
    char search_name[LENGTH];
    char found = 'F';
    int i = 0;
    start = 0;
    end = ROWS;
    do{
        printf("Enter name: ");
        scanf("%s", s[i]);
        strcpy(s2[i], s[i]);
        if (s[i][0] >= 65 && s[i][0] <= 90){
            s[i][0] = (int)s[i][0] + 32;
        }
        ++i;
    }while(i < ROWS);

    char temp[50];
    char swap = 'Y';
    while (swap == 'Y'){
        swap = 'N';
        for (int i = 0; i < (ROWS - 1); ++i){
            if (strcmp(s[i], s[i+1]) > 0){
                swap = 'Y';
                strcpy(temp, s[i]);
                strcpy(s[i], s[i+1]);
                strcpy(s[i+1], temp);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < ROWS; ++i){
        printf("%s\n", s[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%s", search_name);

    t1 = clock();
    while(start <= end && found == 'F'){
        mid = (start + end) / 2;
        if (strcmp(search_name, s[mid]) == 0){
            found = 'T';
            }
        else{
            if (strcmp(search_name, s[mid]) > 0){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if (found == 'T'){
            printf("Found name at: %d\n", mid);
        }
    }
    t2 = clock();
    double time_taken = (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\n\nTime taken: %f", time_taken);
}