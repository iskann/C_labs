#include <stdio.h>
int NOD(int n, int m) {
    while (n != m) {
        if (n >m) {
            n = (n - m);
        }
        else {
            m =(m - n);
        }
    }
    return n;
    }



int main(void) {
    int n,m;
    scanf("%d %d", &n, &m);
    if (n >= 1 && m >= 1){
        printf("%d", NOD(n, m));
    }
    else {
        printf("Ошибка ввода");
    }
    return 0;
}
