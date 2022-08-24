#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int c=0, int d=0, int e=0){
    return a+b+c+d+e;
}

int main(int argc, char* argv[]){
    int a,b;
    if(argc != 3){
        printf("Can su dung chuong trinh theo dang tinh tong 2 3");
    }else{
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("Tong %d + %d = %d", a, b, a+b);
    }

    // int a=10;
    // printf("dia chi a: %x\n", &a);

    // int *pa;
    // pa = &a;
    // printf("gia tri pa: %0x\n", pa);
    // //in kích thước của con trỏ
    // printf("%d", sizeof(pa));
}