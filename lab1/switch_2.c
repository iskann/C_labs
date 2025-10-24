#include <stdio.h>
int main(void) {
    int n;
    printf("Введите достоинство карты: ");
    scanf("%d", &n);
    switch (n){
       case 6:
            printf("Шестёрка");
            break;
       case 7:
            printf("Семёрка");
            break;
       case 8:
            printf("Восьмёрка");
            break;
       case 9:
            printf("Девятка");
            break;
       case 10:
            printf("Десятка");
            break;
       case 11:
            printf("Валет");
            break;
       case 12:
            printf("Дама");
            break;
       case 13:
            printf("Король");
            break;
       case 14:
            printf("Туз");
            break;
       default:
            printf("Введённой карты не существует");

    }
    return 0;
}