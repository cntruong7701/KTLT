#include<stdio.h>
#include"MaTran.h"

int main(){
    matran a;
    int m,n;
    nhapMT(a,m,n);
    inMT(a,m,n);

    printf("\n------------------------------\n");
    printf("trung binh cong cua ma tran la: %.2f", tbcMT(a,m,n));

    printf("\n------------------------------\n");
    printf("so lon nhat trong ma tran la: %d", maxMT(a,m,n));

    printf("\n------------------------------\n");
    maxiMT(a,m,n);

    printf("\n------------------------------\n");
    maxjMT(a,m,n);

    printf("\n------------------------------\n");
    printf("tong so nguyen to trong ma tran la: %d", SNTTrongMT(a,m,n));

    printf("\n------------------------------\n");
    SapXepMT(a,m,n);
    printf("Ma tran sau khi sap xep la!\n");
    inMT(a,m,n);
}