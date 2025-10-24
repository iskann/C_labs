#include <stdio.h>
int main(void) {
    int num = 6;
    while (num > 1) {
        num--;
        printf("%d ", num);
    }
    putchar('\n');
    return 0;
}