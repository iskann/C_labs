#include <stdio.h>

int f(int n) {
    if (n==1) return 1;
    if (n==2) return 1;
    return f(n-2) + f(n-1);
}
int main(void) {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;

}
