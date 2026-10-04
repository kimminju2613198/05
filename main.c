#include <stdio.h>

int main(void) {
    int num;

    printf("enter in integer :");
    scanf("%d", &num);

    if (num > 0) {
        printf("positive number\n");
    }
    else if (num < 0) {
        printf("negative number\n");
    }
    else {
        printf("zero\n");
    }

    return 0;
}