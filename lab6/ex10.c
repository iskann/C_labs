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
if (m<2){
    printf("НЕДОСТАТОЧНО СТОЛБЦОВ");
    return 0;
}
int min_sum = 10000000;
int col1 = -1;
int col2 = -1;
for (int j = 0; j<m-1; j++){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += M[i][j] + M[i][j+1]; 
    }
    if (sum < min_sum) {
        min_sum = sum;
        col1 = j;
        col2 = j+1;
    }
}
printf("Номера строк с минмальной суммой - %d, %d\n", col1, col2);
printf("Сумма элементов в стобцах равна %d", min_sum);


return 0;
}





