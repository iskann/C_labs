#include <stdio.h>
int main(void) {
    float price;
    printf("Вычисление стоимости покупки с учетом скидки\nВведите сумму покупки и нажмите <Enter>:");
    scanf("%f", &price);
    if (price > 1000) {
        printf("Вам предоставляется скидка 5%%\nСумма с учетом скидки: %f\n", price * 0.95);
    } else if (price > 500) {
        printf("Вам предоставляется скидка 3%%\nСумма с учетом скидки: %f\n", price * 0.97);
    } else {
        printf("Скидки нет: %f\n", price);
    }
    return 0;
}
