#include <stdio.h>
#include <locale.h>
#include <windows.h>
int lenstr(char s[]){
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i-1;
}


double chastota(char s[], char x) {
    double counter = 0;
    int length = lenstr(s);
    for (int i = 0; i < length; i++){
        if (x == s[i]){
            counter++;
        }
    }
    if (length == 0){
        return 0;
    }
    return (counter/length) * 100;
}

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    char s[100], x;
    printf("Введите строку: ");
    fgets(s, 100, stdin);
    printf("Введите символ: ");
    scanf("%c", &x);
    printf("Доля символа равна %.3lf%%", chastota(s, x));
    return 0;
}
