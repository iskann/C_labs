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
for (int j = 0; j<m; j++){
    int first_neg = -1;
    int last_zero = -1;
    for (int i = 0; i <n;i++){
        if (M[i][j] < 0){
            first_neg = i;
            break;
        }
    }
    for (int i = n-1; i>= 0; i--){
        if (M[i][j] == 0){
            last_zero = i;
            break;
        }
    }
    if (first_neg != -1 && last_zero != -1){
        int temp = M[first_neg][j];
        M[first_neg][j] = M[last_zero][j];
        M[last_zero][j] = temp;
    }
}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
return 0;
}





