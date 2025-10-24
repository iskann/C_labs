#include <stdio.h>
#define SIZE 10
int main(){
int M[SIZE][SIZE];
int n, m;
printf("ВВЕДИТЕ ЧИСЛО СТРОК МАТРИЦЫ\n");
scanf("%d", &n);
printf("ВВЕДИТЕ ЧИСЛО СТОЛБЦОВ МАТРИЦЫ\n");
scanf("%d", &m);
if (n > SIZE || m > SIZE ){
    printf("ВЫ ВВЕЛИ СЛИШКОМ БОЛЬШОЕ ЧИСЛО (>10)");
    return 1;
}
printf("ВВОД элементов матрицы\n");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++){
        scanf("%d", &M[i][j]);
    }
}
int flag = 0;
for(int j = 0; j <m;j++){
    int counter_pol = 0;
    int counter_otric = 0;
    for (int i = 0; i < n; i++){
        if (M[i][j] > 0){
            counter_pol++;}
        else {
            counter_otric++;
        }
        }
    if (counter_pol == counter_otric){
        flag = 1;
        break;
    }
    }
    if (flag == 1){
    printf("В матрице есть столбцов с одинковым числом положительных и отрицательных элементов");}
    else {
    printf("В матрице нет столбцов с одинковым числом положительных и отрицательных элементов");
    }
    return 0;
}