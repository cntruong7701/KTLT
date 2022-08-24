#include<stdio.h>
#define MAX 100
typedef int MangSN[MAX];

void NhapMang(MangSN, int &);
void XuatMang(MangSN, int);

int SNT(int);
void InDsSNT(MangSN, int n);

void SoChinhPhuong(MangSN, int n);

float TinhTB(MangSN, int n);
void MaxTB(MangSN, int);

int Max(MangSN, int n);

int MangTangDan(MangSN, int n);

void SapXepTangDan(MangSN a, int n);
void SapXepGiamDan(MangSN a, int n);
