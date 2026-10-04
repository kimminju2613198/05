#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("= %d\n", a + b);
            break;
        case '-':
            printf("= %d\n", a - b);
            break;
        case '*':
            printf("= %d\n", a * b);
            break;
        case '/':
            printf("= %d\n", a / b);
            break;
        case '%':
            printf("= %d\n", a % b);
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}