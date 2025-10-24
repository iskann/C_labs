#include <stdio.h>
#include <conio.h>
int main(void) {
    char line[255];
    FILE *file = fopen("ex2.txt", "w");
    int ch;
    while (1) {
        ch = _getch();
        if (ch == 27) {
            break;
        }
        putchar(ch);
        fputc(ch, file);
    }
    fclose(file);
    return 0;
}