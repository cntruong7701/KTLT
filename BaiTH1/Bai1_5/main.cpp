#include<stdio.h>
#include"GopMang.h"
int main(){
    MangSN a,b,mangtron;
    int an,bn,ntron;
    NhapMang(a,an);
    printf("Mang thu nhat: \n");
    SapXepTangDan(a,an);
    XuatMang(a,an);

    printf("\n----------------------------\n");

    NhapMang(b,bn);
    printf("Mang thu hai: \n");
    SapXepTangDan(b,bn);
    XuatMang(b,bn);

    printf("\nMang sau khi tron: \n");
    Tron(a,an,b,an,mangtron,ntron);
    XuatMang(mangtron,ntron);

}