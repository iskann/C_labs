#include <stdio.h>
#include <math.h>
int main(void) {
    float x, y;
    scanf("%f", &x);
    if (x > 0) {
         y = 2 * x - 10;
    } else if (x == 0) {
        y = 0;
    } else {
        y = 2 * fabs(x) - 1;
    }
    printf ("y: %f\n", y);
    return 0;
}
