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
int sum = 0;
for (int i = 0; i <n; i++){
    for (int j = 0; j<m; j++){
        if (i < j && i<n-1-j){
            sum = sum + M[i][j];
        }
    }
}
printf("Сумма верхней четверти равна %d", sum);
return 0;
}





