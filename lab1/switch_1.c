#include <stdio.h>
int main(void) {
	int n;
    printf("Введите номер дня недели: ");
    scanf("%d", &n);
    switch (n) {
        case 1:
        printf("Понедельник");
        break;
        case 2:
        printf("Вторник");
        break;
        case 3:
        printf("Среда");
        break;
        case 4:
        printf("Четверг");
        break;
        case 5:
        printf("Пятница");
        break;
        case 6:
        printf("Суббота");
        break;
        case 7:
        printf("Воскресенье");
        break;
    }
    return 0;
}