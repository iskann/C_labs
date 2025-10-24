#include <stdio.h>
#include <math.h>
int sum(int n) {
    int summa=0;
    while (n !=0 ){
        summa = summa + n%10;
        n = n / 10;
    }
    return summa;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
