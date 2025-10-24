#include <stdio.h>
#include <stdlib.h>
int main()
{
int *pa, x=5;
pa = &x;
printf("По адресу %p хранится *ptr=%d\n",pa,*pa);
pa++;
printf("По адресу %p хранится *ptr=%d\n",pa,*pa);
pa--;
printf("По адресу %p хранится *ptr=%d\n",pa,*pa);

double *pb, y = 3.14;
    pb = &y;
    printf("По адресу %p хранится *pb=%g\n", pb, *pb);
    pb++;
    printf("По адресу %p хранится *pb=%g\n", pb, *pb);
    pb--;
    printf("По адресу %p хранится *pb=%g\n\n", pb, *pb);

char *pc, c = 'A';
    pc = &c;
    printf("По адресу %p хранится *pc=%c\n", pc, *pc);
    pc++;
    printf("По адресу %p хранится *pc=%c\n", pc, *pc);
    pc--;
    printf("По адресу %p хранится *pc=%c\n\n", pc, *pc);


return 0;}
