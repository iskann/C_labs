#include <stdio.h>
int main(void) {
    int i = 5;
    do {
        printf("%d ", i);
        i--;
    }
    while (i > 0);
    return 0;
}
