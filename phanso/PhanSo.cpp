#include "PhanSo.h"
#include <stdio.h>
#include <math.h>

// hàm nhập phân số
void NhapPS(PhanSo &p)
{
    printf("Nhap tu số: ");
    scanf("%d", &p.tuSo);
    do
    {
        printf("Nhap mau số: ");
        scanf("%d", &p.mauSo);
    } while (p.mauSo == 0);
}

// hàm xuất phân số
void XuatPS(PhanSo p)
{
    printf("%d/%d", p.tuSo, p.mauSo);
}

int UCLN(int a, int b)
{
	if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}

//hàm rút gọn phân số
void RutGonPS(PhanSo &p){
    int ucln = UCLN(p.tuSo, p.mauSo);
		p.tuSo /= ucln;
		p.mauSo /= ucln;
}