#include <stdio.h>
int main(void) {
    int *c1;
    char *c2;
    double *c3;
    printf("под указатель переменной типа int выделяется %lu байт\n",sizeof(c1));
    printf("под указатель переменной типа char выделяется %lu байт\n",sizeof(c2));
    printf("под указатель переменной типа double выделяется %lu байт\n",sizeof(c3));
    return 0;
}