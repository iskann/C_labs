#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    unsigned char choice;
    printf("Введите код транспортного средства: ");
    
    scanf("%c", &choice);
    
    // ASCII коды русских букв в Windows-1251
    switch (choice){
        case 224: // 'а'
            printf("Максимальная скорость автомобиля 490 км/ч\n");
            break;
        case 234: // 'в'
            printf("Максимальная скорость велосипеда 297 км/ч\n");
            break;
        case 236: // 'м'
            printf("Максимальная скорость мотоцикла 676 км/ч\n");
            break;
        case 241: // 'с'
            printf("Максимальная скорость самолета 7274 км/ч\n");
            break;
        case 239: // 'п'
            printf("Максимальная скорость поезда 650 км/ч\n");
            break;
        default:
            printf("Неверный выбор! Введите %c, %c, %c, %c или %c\n", 
                   224, 234, 236, 241, 239);
            break;
    }
    
    return 0;
}