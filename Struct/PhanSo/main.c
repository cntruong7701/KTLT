#include<stdio.h>
#include "PhanSo.h"
 
int main()
{

    PhanSo p;
    NhapPS(p);
    printf("\nPhan so vua nhap la: ");
    XuatPS(p);
    if(KiemTra(p)){
        printf("\nphan so toi gian!!");
    }else   
    {
        printf("\nPhan so chua toi gian??");
        printf("\nRut gon phan so: ");
        XuatPS(RutGonPS(p));
    }
    printf("\n------------------------------------------");
    PhanSo a,b;
    printf("\nNhap phan so a:\n");
    NhapPS(a);
    printf("\nNhap phan so b:\n");
    NhapPS(b);
    CongPS(a,b);
    printf("Cong 2 phan so a, b la: \n");
    XuatPS(CongPS(a,b));
    printf("\nTru 2 phan so a, b la: \n");
    XuatPS(truPS(a,b));
    printf("\nNhan 2 phan so a, b la: \n");
    XuatPS(nhanPS(a,b));
    printf("\nChia 2 phan so a, b la: \n");
    XuatPS(chiaPS(a,b));

    printf("\n--------------------------------------------\n");
    quydongPS(a,b);
    printf("\nQuy dong phan so a, b la: \n");
    XuatPS(a);
    printf("\n va \n");
    XuatPS(b);
    printf("\n--------------------------------------------\n");
    printf("Kiem tra phan so am duong");
    if(ktAmDuong(truPS(a,b)) == 0){
        printf("Phan so bang khong!");
    }else if(ktAmDuong(truPS(a,b)) == -1){
        printf("Phan so am!");
    }else if(ktAmDuong(truPS(a,b)) == 1){
        printf("Phan so duong!");
    }

    printf("\n--------------------------------------------\n");
    printf("so sanh phan so\n");
    sosanhPS(a,b);

}