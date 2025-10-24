#include <stdio.h>
#include <math.h>
int prost(int n) {
    int flag = 1;
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", prost(n));
    return 0;
}
