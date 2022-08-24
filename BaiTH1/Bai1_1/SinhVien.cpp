#include<stdio.h>
#include<string.h>
#include"SinhVien.h"

void NhapSV(SinhVien &sv){
    printf("Nhap ma sinh vien: \n");
    fflush(stdin);
    gets(sv.maSV);
    printf("Nhap ten sinh vien: \n");
    gets(sv.tenSV);
    printf("Nhap diem trung binh sinh vien: \n");
    scanf("%f", &sv.dtb);
}

void NhapDs(SinhVien sv[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap sinh vien thu %d: \n", i+1);
        NhapSV(sv[i]);
    }
    
}

void InSV(SinhVien sv){
    printf("\nMa Sinh Vien: %s", sv.maSV);
    printf("\nTen Sinh Vien: %s", sv.tenSV);
    printf("\nDiem trung binh: %.2f", sv.dtb);
}

void InDsSv(SinhVien sv[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nSinh Vien thu %d: ", i+1);
        InSV(sv[i]);
    }
    
}

void TimKiemSV(SinhVien sv[], char maSV[], int n){
    for(int i = 0; i < n; i++) {
        if(strstr(maSV, sv[i].maSV)) {
            InSV(sv[i]);
        }
    }
}

void sapXepSVtheoDTB(SinhVien sv[], int n){
    SinhVien tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(sv[i].dtb < sv[j].dtb){
                tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
        
    }
    
}

