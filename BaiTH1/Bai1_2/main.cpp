#include<stdio.h>
#include"MangSN.h"
int main(){
    MangSN a;
    int n;
    NhapMang(a,n);
    XuatMang(a,n);


    printf("\n----------------------\n");
    printf("So nguyen to trong mang: ");
    InDsSNT(a,n);

    printf("\n----------------------\n");
    printf("So chinh phuong trong mang: ");
    SoChinhPhuong(a,n);

    printf("\n----------------------\n");
    printf("gia tri trung binh cua mang: %.2f", (float)TinhTB(a,n));

    printf("\n----------------------\n");
    int max = Max(a,n);
    printf("So lon nhat trong mang: %d", max);

    printf("\n----------------------\n");
    printf("Kiem tra mang sap xep tang dan !!!\n");
    if(MangTangDan(a,n)){
        printf("Mang da sap xep tang dan !!!");
    }
    else printf("Mang chua sap xep tang dan!!!");

    printf("\n----------------------\n");
    SapXepTangDan(a,n);
    printf("mang sau khi sap xep tang dan !!!\n");
    XuatMang(a,n);

    printf("\n----------------------\n");
    SapXepGiamDan(a,n);
    printf("mang sau khi sap xep giam dan !!!\n");
    XuatMang(a,n);

    printf("\n----------------------\n");
    printf("so phan tu lon hon trung binh cua mang la:\n");
    MaxTB(a,n);

}