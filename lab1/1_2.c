#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y;
	printf("Введите число: ");
	scanf("%lf", &x);
	if (x > 0) {
	    y = 2 * x - 10;
	}
	if (x == 0) {
	    y = 0;
	}
	if (x < 0) {
	    y = 2 * fabs(x) - 1;
	}
	
	printf("%.2lf", y);
	return 0;
}