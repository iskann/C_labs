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
int min_sum = 100000000;
for (int i = 0; i < n; i++){
    int str_summ = 0;
    for (int j = 0; j <m; j++){
        str_summ += M[i][j];
    }
    if (str_summ < min_sum){
        min_sum = str_summ;
    } 
}
printf("MINIMAL SUM: %d", min_sum);
return 0;
}





