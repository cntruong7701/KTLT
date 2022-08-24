#include<stdio.h>
#define MAX 100
typedef int Mang[MAX];

void NhapMang(Mang, int &);
void XuatMang(Mang, int);

int TongPT(Mang,int);
int TongPTDQ(Mang,int);

int TongSoDuongPT(Mang,int);
int TongSoDuongPTDQ(Mang,int);

int SNT(int);

int DemSNT(Mang,int);
int DemSNTDQ(Mang,int);

int Max(Mang,int);
int MaxDQ(Mang,int);