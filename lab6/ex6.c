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
int flag = 1;
for (int i = 0; i <n; i++){
    for (int j = 0; j <m; j++){
        if (M[i][j] != M[j][i]){
            flag = 0;
            break;
        }
    }
    if (flag == 0){
        break;
    }
}
if (flag == 1){
    printf("Матрица симметрична относительно главной диагонали");
}
else {
    printf("Матрица не симметрична относительно главной диагонали");
}

return 0;
}





