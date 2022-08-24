#include<stdio.h>
#include"Ham.h"

int main(){
    float luythua,luythuaDQ,x;
    int n;

    printf("Nhap co so: ");
    scanf("%f", &x);
    printf("Nhap so mu: ");
    scanf("%d", &n);
    luythua = LuyThua(x,n);
    printf("Ket qua khong de quy %.1f^%d: %f\n", x, n, luythua);

    luythuaDQ = LuyThuaDQ(x,n);
    printf("Ket qua co de quy %.1f^%d: %f\n", x, n, luythuaDQ);

    printf("\n--------------------------------------\n");
    int a;
    do
    {
        printf("nhap a: ");
        scanf("%d", &a);
    } while (a<=0);
    
    printf("ket giai thua khong de quy: %d\n", GiaiThua(a));
    printf("ket giai thua co de quy: %d\n", GiaiThuaDQ(a));

    printf("\n--------------------------------------\n");
    printf("tong n khong de quy: %d\n", Tong(a));
    printf("tong n co de quy: %d\n", TongDQ(a));

    printf("\n--------------------------------------\n");
    printf("tong n le khong de quy: %d\n", Tongle(a));
    printf("tong n le co de quy: %d\n", TongleDQ(a));

    printf("\n--------------------------------------\n");
    printf("tong n chan khong de quy: %d\n", Tongchan(a));
    printf("tong n chan co de quy: %d\n", TongchanDQ(a));

    printf("\n--------------------------------------\n");
    printf("tong n SNT khong de quy: %d\n", TongSoNT(a));
    printf("tong n SNT co de quy: %d\n", TongSoNTDQ(a));

    printf("\n--------------------------------------\n");
    printf("n SNT khong de quy: %d\n", DemSNT(a));
    printf("n SNT co de quy: %d\n", DemSNTDQ(a));


    // Câu 2.2
    printf("\n--------------------------------------\n");
    printf("so n cua day fibonacci khong de quy: %d\n", Fibonacci(a));
    printf("so n cua day fibonacci co de quy: %d\n", FibonacciDQ(a));

    // Câu 2.3
    int h=4,m=8,k=3;
    printf("\n--------------------------------------\n");
    printf("Tong so vi trung so trung trong %dh la: %d\n",h ,TongSoVT(m,h,k));
    printf("Tong so vi trung so trung trong %dh la: %d\n",h ,TongSoVTDQ(m,h,k));

    // Câu 2.4
    float tien=100,laisuat = 8;
    int nam=3;
    printf("\n--------------------------------------\n");
    printf("Tong so tien lai trong %d nam la: %.2f\n",nam ,LaiSuat(tien,laisuat,nam));
    printf("Tong so tien lai trong %d nam la: %.2f\n",nam ,LaiSuatDQ(tien,laisuat,nam));

    // Câu 2.5
    int nphtu = 4;
    int mang[] = {1,5,6,8};
    printf("\n--------------------------------------\n");
    printf("Vi tri x trong mang la: %d", Tim(mang,5,nphtu));

    //câu 2.6
    char chuoi[] = "cao nhat truong";
    printf("\n--------------------------------------\n");
    printf("do dai chuoi %s la: %d",chuoi, DoDaiChuoi(chuoi,0));
}