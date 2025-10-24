#include <stdio.h>
int main(void) {
    printf("Введите числа:");
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) { max = b; }
    if (c > max) { max = c; }
    printf("Наибольшее число: %d\n", max);
    return 0;
}
