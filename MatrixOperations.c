#include <stdio.h>

void createDiagonalMatrix(int n) {
    int matrix[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i == j) ? 1 : 0;
        }
    }

    printf("Diagonal Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void createSquareMatrix(int size) {
    int matrix[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Square Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int sumMatrixElements(int rows, int cols) {
    int matrix[rows][cols];
    int totalSum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
            totalSum += matrix[i][j];
        }
    }

    printf("Custom Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return totalSum;
}

int main() {
    while (1) {
        printf("Menu:\n");
        printf("1: Enter numbers diagonally\n");
        printf("2: Create a particular sized square matrix\n");
        printf("3: Calculate sum of elements in matrix\n");
        printf("4: Exit\n");
        
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int size;
                printf("Enter matrix size: ");
                scanf("%d", &size);
                createDiagonalMatrix(size);
                break;
            }
            case 2: {
                int size;
                printf("Enter matrix size: ");
                scanf("%d", &size);
                createSquareMatrix(size);
                break;
            }
            case 3: {
                int rows, cols;
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                printf("Enter number of columns: ");
                scanf("%d", &cols);
                int totalSum = sumMatrixElements(rows, cols);
                printf("Sum of elements in the matrix: %d\n", totalSum);
                break;
            }
            case 4: {
                printf("Exiting...\n");
                return 0;
            }
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
