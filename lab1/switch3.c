#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(void) {
    setlocale(LC_ALL, "");
    wchar_t transport;
    printf("Введите признак транспортного средства: а, п, с, м, в ");
    transport = getwchar();
    switch (transport) {
        case L'а':
            printf("Максимальная скорость автомобиля: 1228км/ч\n");
            break;
        case L'в':
            printf("Максимальная скорость велосипеда: 130км/ч\n");
            break;
        case L'с':
            printf("Максимальная скорость самолета: 3065км/ч\n");
            break;
        case L'м':
            printf("Максимальная скорость мотоцикла: 350км/ч\n");
            break;
        case L'п':
            printf("Максимальная скорость поезда: 603км/ч\n");
            break;
        default:
            printf("Признак введен неверно\n");
            break;
    }
    return 0;
}