#include <stdio.h>

int def(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", def(number));
    return 0;
}
