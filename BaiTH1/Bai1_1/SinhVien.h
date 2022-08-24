#include<stdio.h>
struct SinhVien
{
    char maSV[6];
    char tenSV[30];
    float dtb;
};

void NhapSV(SinhVien &);
void NhapDs(SinhVien sv[], int n);
void InSV(SinhVien);
void InDsSv(SinhVien sv[], int n);

void TimKiemSV(SinhVien sv[], char maSV[], int n);
void sapXepSVtheoDTB(SinhVien sv[], int n);