#include <stdio.h>
int main(void) {
    char line[255];
    FILE *file = fopen("ex3.txt", "w+");
    for (int i = 0; i <= 21; i++){
        fprintf(file, "%d%d%d ", i,i,i);
    }
    rewind(file);
    int number;
    int max_number;
    int count = 0;
    while (fscanf(file, "%d", &number) == 1){
        count++;
        if (count == 1){
            max_number = number;
        }
        else if (number > max_number) {
            max_number = number;
        }
    }
    fclose(file);
    printf("%d", max_number);
    return 0;
}