#include <stdio.h>

int def(int n) {
    if (n < 0) return 0;
    
    for (int i = 0; i * i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", def(number));
    return 0;
}
