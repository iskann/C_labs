#include <stdio.h>
int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    if (k == 0) {
        printf("Нельзя делить на ноль\n");
    } else if (n % k == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
    
