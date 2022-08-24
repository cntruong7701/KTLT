#include<stdio.h>
#include "PhanSo.h"

int main(){
    PhanSo s1;
    NhapPS(s1);
    printf("Phan so vua nhap: \n");
    XuatPS(s1);
    if(KTPSToiGian(s1)){
        printf("\nPhan so da toi gian\n");
    }
    else{
        printf("\nPhan so chua toi gian\n");
        printf("\nTien hanh rut gon phan so: \n");
        printf("\nPhan so sau khi rut gon: \n");
        XuatPS(RutGonPS(s1));
    }
    printf("\n================================\n");
    printf("\nNhap phan so thu hai: \n");
    PhanSo s2;
    NhapPS(s2);
    printf("Phan so vua nhap: \n");
    XuatPS(s2);
    printf("\n================================\n");
    printf("\nTong hai phan so la: \n");
    XuatPS(TongPS(s1, s2));
    printf("\n================================\n");
    printf("\nHieu hai phan so la: \n");
    XuatPS(HieuPS(s1, s2));
    printf("\n================================\n");
    printf("\nTich hai phan so la: \n");
    XuatPS(TichPS(s1, s2));
    printf("\n================================\n");
    printf("\nThuong hai phan so la: \n");
    XuatPS(ChiaPS(s1, s2));
    printf("\n================================\n");
    printf("Qui dong hai phan so ");
    XuatPS(s1);
    printf("\tva\t");
    XuatPS(s2);
    printf("\n==============> Ket Qua: \t");
    QuiDongPS(s1, s2);
    XuatPS(s1);
    printf("\tva\t");
    XuatPS(s2);
    printf("\n================================\n");
    printf("Kiem tra phan so am hay duong: \n");
    PhanSo s3;
    printf("Nhap phan so can kiem tra: \n");
    NhapPS(s3);
    switch (KTPSAmHayDuong(s3))
    {
    case 0:
        printf("Phan so bang 0");
        break;
    case 1:
        printf("Phan so duong");
        break;
    case -1:
        printf("Phan so am");
        break;

    default:
        break;
    }

    printf("\n================================\n");
    printf("So sanh hai phan so: ");
    PhanSo ss1, ss2;
    printf("Nhap phan so thu nhat: \n");
    NhapPS(ss1);
    printf("Nhap phan so thu hai: \n");   
    NhapPS(ss2);
    SoSanhPS(ss1, ss2);
    return 0;
}