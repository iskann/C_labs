#include <stdio.h>
#include <math.h>
#define SIZE 10
int main(){
int matrix[SIZE][SIZE];
int n, m;
printf("Введите количество строк");
scanf("%d", &n);
printf("Введите количество столбцов");
scanf("%d", &m);
if (n > SIZE || m > SIZE ){
    printf("ВЫ ВВЕЛИ СЛИШКОМ БОЛЬШОЕ ЧИСЛО (>10)");
    return 1;
}
printf("ВВОД элементов матрицы\n");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++){
        scanf("%d", &matrix[i][j]);
    }
}
//подсчет суммы элементов
int sum = 0;
int len = 0;
double sr;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++){
        sum += matrix[i][j];
        len++;
    }
}
sr = (double)sum/len;
//Вывод матрицы
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++){
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
int raznicaSoSrednim = 10000000;
double temp=0;
int index1 = 0;
int index2 = 0;
//ПОиск индекса
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++){
        temp = fabs(matrix[i][j] - sr);
        if (temp < raznicaSoSrednim) {
            raznicaSoSrednim = temp;
            index1 = i;
            index2 = j;
        }
    
    }
}

printf("КООРДИНАТЫ: %d %d",index1, index2);
}