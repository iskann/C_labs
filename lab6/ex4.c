#include <stdio.h>
#define SIZE 10
int main(){
int M[SIZE][SIZE];
int n, m;
int a;
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
for (int i = n-1; i>=0 ; i--){
    int flag = 1;
    for (int j = 0; j < m; j++) {
        if (M[i][j] % a != 0){
            flag = 0;
            break;
        }
    }
    if (flag ==0){
        continue;}
    else {
        printf("Максимальный индекс строки, в котором все числа делятся на %d это %d",a,i);
        break;
    }


}
return 0;
}