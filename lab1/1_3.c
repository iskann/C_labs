#include <stdio.h>
int main(void) {
	int N, K;
    printf("Введите числа: ");
	scanf("%d %d", &N, &K);
	if (K == 0) {
	    printf("Вы поделили на ноль");
	}
	else if (N % K == 0) {
	    printf("%d кратно %d", N, K);
	}
	else {
	    printf("%d не кратно %d", N, K);
	}
    return 0;
}