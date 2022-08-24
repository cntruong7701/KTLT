#include <stdio.h>
#include "DonThuc.h"

int main(){
    DonThuc dt,a,b;
    NhapDonThuc(dt);
    printf("don thuc vua nhap la: ");
    XuatDonThuc(dt);

    printf("\n--------------------------------\n");
    printf("Nhap don thu thu nhat: \n");
    NhapDonThuc(a);
    printf("Nhap don thu thu hai: \n");
    NhapDonThuc(b);
    printf("tich 2 hai da thu la: \n");
    XuatDonThuc(Tich(a,b));

    printf("\n--------------------------------\n");
    printf("thuong 2 hai da thu la: \n");
    XuatDonThuc(Thuong(a,b));

    printf("\n--------------------------------");
    printf("\ndao ham cap 1 cua da thuc dt la: \n");
    XuatDonThuc(DHCap1(dt));

    printf("\n--------------------------------\n");
    int k;
    do
    {
        printf("nhap so bat dao ham: ");
        scanf("%d", &k);
        if(k<0 || k>dt.soMu){
            printf("so bat khong hop le nhap lai: \n");
        }
    } while (k<0 || k>dt.soMu);
    
    printf("\ndao ham cap %d cua da thuc dt la: \n", k);
    XuatDonThuc(DHCapK(dt,k));

    printf("\n--------------------------------\n");
    int x;
    printf("nhap gia tri x: ");
    scanf("%d", &x);
    double giatri=GiaTriDT(dt,x);
    printf("\ngia tri dao ham dt voi x = %d la: %f\n", x, giatri);
    


}