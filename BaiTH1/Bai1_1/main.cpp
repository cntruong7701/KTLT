#include<stdio.h>
#include"SinhVien.h"

int main(){
    SinhVien p[100];
    int n;
    printf("nhap so sinh vien: \n");
    scanf("%d", &n);

    printf("------------------------------\n");
    NhapDs(p, n);
    InDsSv(p, n);

    printf("\n------------------------------\n");
    printf("tim kiem sinh vien theo ma sinh vien");
    char ms[6];
    printf("\nNhap masv de tim kiem: \n"); fflush(stdin); gets(ms);
    TimKiemSV(p, ms, n);
    printf("\n------------------------------\n");
    printf("sap sep sinh vien theo diem trung binh giam dan!");
    sapXepSVtheoDTB(p, n);
    InDsSv(p,n);
}