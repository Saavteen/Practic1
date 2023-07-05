#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int t1, t2, t3;
    float total;

    SetConsoleOutputCP(1251);

    printf("(t1): ");
    scanf("%d", &t1);

    printf("(t2): ");
    scanf("%d", &t2);

    printf("(t3): ");
    scanf("%d", &t3);

    total = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    printf("The time it takes for the guests to eat the cake: %.2f hours\n", 1.0 / total);

    return 0;
}