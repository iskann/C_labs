#include <stdio.h>
int main(void) {
	double n;
	printf("Введите число: ");
	scanf("%lf", &n);
	if (n == (int) n) {
		if ((int)n % 2 == 0){
			printf("Число %.0lf является чётным", n);
		}
		else {
			printf("Число %.0lf не является чётным", n);
		}
	}
	else {
        printf("Число %lf  не является целым", n);
	}
    return 0;
}