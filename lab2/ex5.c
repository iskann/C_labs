#include <stdio.h>
int main(void) {
    for (int i = 0; i<= 90; i=i+10){
        for (int j = 0; j<=9; j=j+1){
            printf("%d ", i + j);
            if (j == 9) {
                goto probel;
            }
        }
    probel: printf("\n");
    }
    return 0;
}
