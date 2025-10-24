#include <stdio.h>
int main(void) {
    int i, n;
    for (i = 0; i < 99; i = i + 10) {
        for (n = 0; n <= 9; n++) {
            printf("%d ", i + n);
            if (n == 9) { 
                goto enter;
            }
}
            enter: putchar('\n');
}
return 0;
}
