#include <stdio.h>
#define SIZE 10
int main(){
int M[SIZE][SIZE];
int n, m, a;
printf("ВВЕДИТЕ ЧИСЛО СТРОК МАТРИЦЫ\n");
scanf("%d", &n);
printf("ВВЕДИТЕ ЧИСЛО СТОЛБЦОВ МАТРИЦЫ\n");
scanf("%d", &m);
printf("ВВЕДИТЕ ЧИСЛО А\n");
scanf("%d", &a);
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
for (int i = 0; i<n; i++){
    int counter = 0;
    for (int j = 0; j <m; j++){
        if (M[i][j] % 10 == a){
            counter++;
        }
    }
    printf("В строке с индексом %d - %d чисел, кончающихся на %d\n", i, counter,a);
}
return 0;
}





