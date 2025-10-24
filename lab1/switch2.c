#include <stdio.h>
int main(void) {
    int num;
    printf("Введите порядковый номер карты:");
    scanf("%d", &num);
    switch (num) {
        case 6:
            printf("Шестерка\n");
            break;
        case 7:
            printf("Семерка\n");
            break;
        case 8:
            printf("Восьмерка\n");
            break;
        case 9:
            printf("Девятка\n");
            break;
        case 10:
            printf("Десятка\n");
            break;
        case 11:
            printf("Валет\n");
            break;
        case 12:
            printf("Дама\n");
            break;
        case 13:
            printf("Король\n");
            break;
        case 14:
            printf("Туз\n");
            break;
    }
    return 0;
}