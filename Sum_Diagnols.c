#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, sum = 0;
    printf("Input the rows and columns of a matrix: ");
    scanf("%d", &row);

    int **array = malloc(row * sizeof(int));
    for (int i = 0; i < row; ++i){
        array[i] = (int *)malloc(row * sizeof(int));
    }

    printf("\nInput the elements of the matrix:");

    for (int i = 0; i < row; ++i){
        for (int j  = 0; j < row; ++j){
            printf("\nelement - [%d] [%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < row; ++i){
        for (int j  = 0; j < row; ++j){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; ++i){
        for (int j  = 0; j < row; ++j){
            if (i == j){
                sum = sum + array[i][j];
            }
        }
    }
    printf("Addition of the diagnol elements is: %d\n", sum);
    free(array);
}