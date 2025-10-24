#include <stdio.h>
int main(void) {
    int year;
    printf("В каком году был основан Санкт-Петербург?\nВведите число и нажмите <Enter>:");
    scanf("%d", &year);
    if (year == 1703) {
        printf("Правильно\n");
    } else {
        printf("Вы ошиблись, Санкт-Петербург был основан в 1703 году]\n");
    }
    return 0;
}
