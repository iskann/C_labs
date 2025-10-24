#include <stdio.h>
int main(void) {
    int res = 1;
    int num = 1;
    do {
        res = num * 3;
        printf ("3 * %d = %d\n", num, res);
        num++;
    }while (res < 30);
    return 0;
}
