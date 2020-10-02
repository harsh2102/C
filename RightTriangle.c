#include<stdio.h>

void main() {
  int n, j;
  printf("Enter the no. of lines you want in your triangle: ");
  scanf("%d", & n);
  for (int i = 1; i <= n; i++) {
    for (j = n - i; j > 0; j--) {
      printf(" ");
    }
    for (int k = 0; k < i; k++) {
      printf("#");
    }
    printf("\n");
  }
}