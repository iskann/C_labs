#include <stdio.h>
#include <math.h>
int kvadrat(int n) {
    int flag = 0;
    for ( int i = 0; i <=sqrt(n); i++) {
        if (i * i == n) {
            flag = 1;
            break;
        }
    }
    return flag; 
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", kvadrat(n));
    return 0;
}
