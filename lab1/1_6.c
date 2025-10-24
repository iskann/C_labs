#include <stdio.h>
int main(void) {
	double rw, h, ow;
    printf("Введите ваш вес (кг):");
    scanf("%lf", &rw);
    printf("Введите ваш рост (см):");
    scanf("%lf", &h);
    ow = h - 100;
    if (ow == rw) {
        printf("Вы находитесь в идеальном весе");
    }
    else if (ow > rw) {
        printf("Вам нужно поправиться на %.2lf килограмм", ow - rw);
        }
    else {
        printf("Вам нужно похудеть на %.2lf килограмм", rw - ow);
    }
    
    return 0;
}