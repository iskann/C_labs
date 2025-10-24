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

int s1 = 0;
//ПОиск первоначальной суммы, которая должна совпасть с остальными
for (int j = 0; j < m; j++) {
    s1 += M[0][j];
}
int flag1 = 1;
for (int i = 0; i < n; i++) {
    int s2 = 0;
    for (int j = 0; j<m; j++){
        s2 += M[i][j];
    }
    if (s2!=s1){
        flag1 = 0;
        break;
    }
}

int flag2 = 1;
for (int j = 0; j < m; j++) {
    int s3 = 0;
    for (int i = 0; i<m; i++){
        s3 += M[i][j];
    }
    if (s3!=s1){
        flag2 = 0;
        break;
    }
}

int flag3 = 1;
int s4 = 0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j<m; j++){
        if (i ==j){
            s4 += M[i][j];
        }
    }
}
if (s4!=s1){
    flag3 = 0;
}

int flag4 = 1;
int s5 = 0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j<m; j++){
        if (i + j == n - 1){
            s5 += M[i][j];
        }
    }
}
if (s5!=s1){
    flag4 = 0;
}
if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 ==1){
    printf("Это магический квадрат");
}
else {
    printf("Это не магический квадрат");

}
return 0;
}





