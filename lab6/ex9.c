#include <stdio.h>
#define SIZE 10
int main(){
int M[SIZE][SIZE];
int n, m;
int massive[SIZE];
printf("ВВЕДИТЕ ЧИСЛО СТРОК И СТОЛБЦОВ КВАДРАТНОЙ МАТРИЦЫ\n");
scanf("%d", &n);

if (n > SIZE){
    printf("ВЫ ВВЕЛИ СЛИШКОМ БОЛЬШОЕ ЧИСЛО (>10)");
    return 1;
}
printf("ВВОД элементов матрицы\n");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
        scanf("%d", &M[i][j]);
    }
}
int k = 0;
for (int  i = 0; i <n; i++){
    for (int j = 0; j <n; j++){
        if (i + j == n - 1){
            massive[k] = M[i][j];
            k++;
        }
    }
}
for (int i = 0; i < k; i++){
    printf("%d ", massive[i]);
}


return 0;
}





