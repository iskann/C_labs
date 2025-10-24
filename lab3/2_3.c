#include <stdio.h>

int def(int n, int m) {
    while (n != m) {
        if (n > m) {
            n -= m;           
        } else m -= n;
    }
    return n;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", def(n, m));
    return 0;
}   
