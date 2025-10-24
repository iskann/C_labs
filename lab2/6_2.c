#include <stdio.h>
int main(void) {
    int i, n;
    for (i = 0; i <= 9; i = i + 1) {
        for (n = 0; n <= 9; n++) {
            printf ("%d ", i * 10 + n);
                if (i == n) {
                    printf("\n");
                    break;
            }
        }
    }
}