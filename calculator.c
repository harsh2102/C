#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    switch (op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': printf("Result: %d\n", a / b); break;
        default: printf("Invalid operator\n"); break;
    }
    return 0;
}
