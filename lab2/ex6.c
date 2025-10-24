#include <stdio.h>
int main(void) {
    for (int i = 0; i<=9; i++){
        for (int j=0; j <= i; j++){
            printf("%d ", i*10 + j);
        }  
    printf("\n");
    }
    return 0;
}
