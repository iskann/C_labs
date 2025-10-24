#include <stdio.h>
int main(void) {
    char line[255];
    FILE *file = fopen("ex1.txt", "w");  
    for (int i = 1; i <= 20; i++){
    fprintf(file, "%d%d%d ",i,i,i);
    }
    fclose(file);

    int choice;
    printf("Выберите режим работы:\n");
    printf("1 - Вывести содержимое на консоль\n");
    printf("2 - Скопировать в новый файл\n");
    scanf("%d", &choice);
    file = fopen("ex1.txt", "r");
    switch (choice) {
        case 1:
        while (fscanf(file, "%255s", line) == 1) {
            printf("%s ", line);
        }
        printf("\n");
        break;
    case 2:
    {FILE *copyfile = fopen("copy_ex1.txt", "w");
    while (fscanf(file, "%255s", line) == 1) {
        fprintf(copyfile, "%s ", line);
    }
    fclose(copyfile);
    printf("Завершено копирование.");
    }
    break;
    default:
    printf("выберите 1 или 2");
}
    fclose(file);
    return 0;
}