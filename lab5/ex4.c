#include <stdio.h>
void show_bytes(void* ptr, int size){
    unsigned char *bytes = ptr;
    for(int i = 0; i < size; i++) {
        printf("%x ", bytes[i]);
    }
    printf("\n");
}

int main()
{
    char ch[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char *ptr_ch = ch; 
    short sh[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    short *ptr_sh = sh;
    int in[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int *ptr_in = in;
    float fl[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    float *ptr_fl = fl;
    
    printf("ptr_ch = %p\n", ptr_ch);
    ptr_ch++;
    printf("После ptr_ch++:\n");
    printf("ptr_ch = %p, *ptr_ch = %c\n", ptr_ch, *ptr_ch);

    printf("ptr_ch = %p\n", ptr_ch);
    ptr_ch = ptr_ch+4;
    printf("После ptr_ch+4:\n");
    printf("ptr_ch = %p, *ptr_ch = %c\n", ptr_ch, *ptr_ch);

    printf("ptr_ch = %p\n", ptr_ch);
    ptr_ch = ptr_ch-2;
    printf("После ptr_ch-2:\n");
    printf("ptr_ch = %p, *ptr_ch = %c\n", ptr_ch, *ptr_ch);
    printf("конец работы с ptr_ch\n\n");
    ptr_ch = ch;
    for (int i = 0; i< 10; i++){
        printf("ptr_ch = %p, *ptr_ch = %c\n", ptr_ch, *ptr_ch);
        ptr_ch++;
    }
    ptr_ch = &ch[9];
    for (int i = 9; i>= 0; i--){
        printf("ptr_ch = %p, *ptr_ch = %c\n", ptr_ch, *ptr_ch);
        ptr_ch--;
    }


    printf("ptr_sh = %p\n", ptr_sh);
    ptr_sh++;
    printf("После ptr_sh++:\n");
    printf("ptr_sh = %p, *ptr_sh = %hd\n", ptr_sh, *ptr_sh);

    printf("ptr_ch = %p\n", ptr_sh);
    ptr_sh = ptr_sh+4;
    printf("После ptr_sh+4:\n");
    printf("ptr_sh = %p, *ptr_sh = %hd\n", ptr_sh, *ptr_sh);

    printf("ptr_sh = %p\n", ptr_sh);
    ptr_sh = ptr_sh-2;
    printf("После ptr_ch-2:\n");
    printf("ptr_sh = %p, *ptr_sh = %hd\n", ptr_sh, *ptr_sh);
    printf("конец работы с ptr_sh\n\n");
    ptr_sh = sh;
    for (int i = 0; i< 10; i++){
        printf("ptr_sh = %p, *ptr_sh = %hd\n", ptr_sh, *ptr_sh);
        ptr_sh++;
    }
    ptr_sh = &sh[9];
    for (int i = 9; i>= 0; i--){
        printf("ptr_sh = %p, *ptr_sh = %hd\n", ptr_sh, *ptr_sh);
        ptr_sh--;
    }

    printf("ptr_in = %p\n", ptr_in);
    ptr_in++;
    printf("После ptr_in++:\n");
    printf("ptr_in = %p, *ptr_in = %d\n", ptr_in, *ptr_in);

    printf("ptr_in = %p\n", ptr_in);
    ptr_in = ptr_in+4;
    printf("После ptr_in+4:\n");
    printf("ptr_in = %p, *ptr_in = %d\n", ptr_in, *ptr_in);

    printf("ptr_in = %p\n", ptr_in);
    ptr_in = ptr_in-2;
    printf("После ptr_in-2:\n");
    printf("ptr_in = %p, *ptr_in = %d\n", ptr_in, *ptr_in);
    printf("конец работы с ptr_in\n\n");
    ptr_in = in;
    for (int i = 0; i< 10; i++){
        printf("ptr_in = %p, *ptr_in = %d\n", ptr_in, *ptr_in);
        ptr_in++;
    }
    ptr_in = &in[9];
    for (int i = 9; i>= 0; i--){
        printf("ptr_in = %p, *ptr_in = %d\n", ptr_in, *ptr_in);
        ptr_in--;
    }

    printf("ptr_fl = %p\n", ptr_fl);
    ptr_fl++;
    printf("После ptr_fl++:\n");
    printf("ptr_fl = %p, *ptr_fl = %f\n", ptr_fl, *ptr_fl);

    printf("ptr_fl = %p\n", ptr_fl);
    ptr_fl = ptr_fl+4;
    printf("После ptr_fl+4:\n");
    printf("ptr_fl = %p, *ptr_fl = %f\n", ptr_fl, *ptr_fl);

    printf("ptr_fl = %p\n", ptr_fl);
    ptr_fl = ptr_fl-2;
    printf("После ptr_fl-2:\n");
    printf("ptr_fl = %p, *ptr_fl = %f\n", ptr_fl, *ptr_fl);
    printf("конец работы с ptr_fl\n\n");
    ptr_fl = fl;
    for (int i = 0; i< 10; i++){
        printf("ptr_fl = %p, *ptr_fl = %f\n", ptr_fl, *ptr_fl);
        ptr_fl++;
    }
    ptr_fl = &fl[9];
    for (int i = 9; i>= 0; i--){
        printf("ptr_fl = %p, *ptr_fl = %f\n", ptr_fl, *ptr_fl);
        ptr_fl--;
    }


    printf("адрес первого элемента в ch = %p\n", &ch[0]);
    printf("адрес второго элемента в ch = %p\n", &ch[1]);
    printf("%c\n", *(ptr_ch + 3));
    printf("адрес первого элемента в sh = %p\n", &sh[0]);
    printf("адрес второго элемента в sh = %p\n", &sh[1]);
    printf("%hd\n", *ptr_sh + 2);
    printf("%hd\n", *(ptr_sh + 2));
    printf("адрес первого элемента в in = %p\n", &in[0]);
    printf("адрес второго элемента в in = %p\n", &in[1]);
    printf("%d\n", *(ptr_in + 2));
    printf("адрес первого элемента в fl = %p\n", &fl[0]);
    printf("адрес второго элемента в fl = %p\n", &fl[1]);
    printf("%f\n", *(ptr_fl + 2));

    int x = 0x12345678; 
    int *ptr; 
    unsigned char *a1, *a2, *a3, *a4; 
    unsigned char *a; 

    ptr = &x; 
    a = (unsigned char*) ptr; 

    a1 = a + 3; 
    a2 = a + 2;
    a3 = a + 1;
    a4 = a;     
    
    printf("%x\n", *a1);
    printf("%x\n", *a2);
    printf("%x\n", *a3);
    printf("%x\n", *a4);
    printf("Система использует little-endian\n");

int k = 0x12345678;
float y = 3.14;
char l = 't';
    
printf("int k: ");
show_bytes(&k, sizeof(k));
printf("float y: ");
show_bytes(&y, sizeof(y));
printf("char l: ");
show_bytes(&l,sizeof(l));



return 0;}
