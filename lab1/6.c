#include <stdio.h>
int main(void) {
    float weight, height, optimal;
    printf("Введите вес, а затем свой рост:");
    scanf("%f %f", &weight, &height);
    optimal = height - 100;
    if (weight > optimal) {
        printf("Вам нужно похудеть\n");
    } else if (weight < optimal) {
        printf("Вам нужно набрать вес\n");
    } else {
        printf("Ваш вес идеален\n");
    }
    return 0;
}
