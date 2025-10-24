#include <stdio.h>
int main(void) {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("Это число четное\n");
    } else {
        printf("Это число нечетное\n");
    }
    return 0;
}
