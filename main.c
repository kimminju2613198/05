#include <stdio.h>

int main(void) {
    int num;

    printf("enter an integer :");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("The absolute value is %d \n", num);

    return 0;
}