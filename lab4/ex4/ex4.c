#include <stdio.h>
#include <conio.h>
int main(void) {
    char line[255];
    FILE *file = fopen("ex4.txt", "w+");
    for (int i = 1; i <= 25; i++){
        fprintf(file, "\n");
    }
    int ch, count=0;
    rewind(file);
    while (1) {
        ch = fgetc(file);
        if (ch == EOF){
            break;
        }
        count++;

    }
    fclose(file);
    printf("%d", count);
    return 0;
}
