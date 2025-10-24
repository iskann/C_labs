#include <stdio.h>
int main(void) {
    for (int i = 0; i<=9; i++){
        for (int j=0; j<=9; j++){
            if (j == 8 || j == 5){
                continue;
            }
            else {
                printf("%d ", i*10 + j);
            }
        }  
    printf("\n");
    }
    return 0;
}