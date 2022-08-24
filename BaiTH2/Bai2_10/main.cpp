#include<stdio.h>
#include"mang.h"
int main(){
    Mang a;
    int n;
    NhapMang(a,n);
    XuatMang(a,n);

    printf("\ntong mang khong de quy: %d\n", TongPT(a,n));
    printf("\ntong mang bang de quy: %d\n", TongPTDQ(a,n));

    printf("\ntong mang duong khong de quy: %d\n", TongSoDuongPT(a,n));
    printf("\ntong mang duong bang de quy: %d\n", TongSoDuongPTDQ(a,n));


    printf("\ndem so nguyen to khong de quy: %d\n", DemSNT(a,n));
    printf("\ndem so nguyen to dung de quy: %d\n", DemSNTDQ(a,n));
    
    int max= Max(a,n);
    printf("\ngia tri max khong dung de quy: %d\n", max);
    printf("\ndem so nguyen to dung de quy: %d\n", MaxDQ(a,n));
}