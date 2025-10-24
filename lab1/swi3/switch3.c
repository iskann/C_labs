#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    unsigned char choice;
    printf("������� ��� ������������� ��������: ");
    
    scanf("%c", &choice);
    
    // ASCII ���� ������� ���� � Windows-1251
    switch (choice){
        case 224: // '�'
            printf("������������ �������� ���������� 490 ��/�\n");
            break;
        case 234: // '�'
            printf("������������ �������� ���������� 297 ��/�\n");
            break;
        case 236: // '�'
            printf("������������ �������� ��������� 676 ��/�\n");
            break;
        case 241: // '�'
            printf("������������ �������� �������� 7274 ��/�\n");
            break;
        case 239: // '�'
            printf("������������ �������� ������ 650 ��/�\n");
            break;
        default:
            printf("�������� �����! ������� %c, %c, %c, %c ��� %c\n", 
                   224, 234, 236, 241, 239);
            break;
    }
    
    return 0;
}