#include <stdio.h>
#define SIZE 10

int main() {
    int matrix[SIZE][SIZE];
    int n, m;
    int duplicate_count = 0;
    printf("Введите количество строк: ");
    scanf("%d", &n);
    printf("Введите количество столбцов: ");
    scanf("%d", &m);
    
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int current = matrix[i][j];
            int is_duplicate = 0;
                for (int k = 0; k < n && !is_duplicate; k++) {
                for (int l = 0; l < m; l++) {
                    if (i == k && j == l) continue;
                    
                    if (matrix[k][l] == current) {
                        is_duplicate = 1;
                        duplicate_count++;
                        break;
                    }
                }
            }
        }
    }
    
    printf("Количество одинаковых элементов: %d\n", duplicate_count);
    return 0;
}