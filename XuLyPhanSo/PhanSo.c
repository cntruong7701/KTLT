#include "PhanSo.h"
#include <stdio.h>
#include <math.h>

void NhapPS(PhanSo &x)
{
    printf("Nhap tu so: ");
    scanf("%d", &x.tuso);
    do
    {
        printf("Nhap mau so: ");
        scanf("%d", &x.mauso);
    } while (x.mauso == 0);
}

void XuatPS(PhanSo x)
{
    printf("%d / %d", x.tuso, x.mauso);
}

int UCLN(int a, int b)
{
    int s1 = abs(a);
    int s2 = abs(b);
    while (s1 != s2)
    {
        if (s1 > s2)
            s1 -= s2;
        else
            s2 -= s1;
    }
    return s1;
}

PhanSo RutGonPS(PhanSo x)
{
    PhanSo tmp;
    tmp.tuso = (int)x.tuso / UCLN(x.tuso, x.mauso);
    tmp.mauso = (int)x.mauso / UCLN(x.tuso, x.mauso);
    return tmp;
}

PhanSo TongPS(PhanSo s1, PhanSo s2)
{
    PhanSo sum;
    sum.tuso = s1.tuso * s2.mauso + s2.tuso * s1.mauso;
    sum.mauso = s1.mauso * s2.mauso;
    return RutGonPS(sum);
}
PhanSo HieuPS(PhanSo s1, PhanSo s2)
{
    PhanSo minus;
    minus.tuso = s1.tuso * s2.mauso - s2.tuso * s1.mauso;
    minus.mauso = s1.mauso * s2.mauso;
    return RutGonPS(minus);
}
PhanSo TichPS(PhanSo s1, PhanSo s2)
{
    PhanSo multiplication;
    multiplication.tuso = s1.tuso * s2.tuso;
    multiplication.mauso = s1.mauso * s2.mauso;
    return RutGonPS(multiplication);
}
PhanSo ChiaPS(PhanSo s1, PhanSo s2)
{
    PhanSo division;
    division.tuso = s1.tuso * s2.mauso;
    division.mauso = s1.mauso * s2.tuso;
    return RutGonPS(division);
}
bool KTPSToiGian(PhanSo s1)
{
    PhanSo tmp = RutGonPS(s1);
    if (tmp.tuso == s1.tuso && tmp.mauso == s1.mauso)
    {
        return 1;
    }
    else
        return 0;
}
int MaxHaiSo(int a, int b)
{
    return (a >= b) ? a : b;
}
int BCNN(int a, int b)
{
    int step = MaxHaiSo(a, b);
    int limit = a * b;
    int i;
    for (i = step; i <= limit; i += step)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
    }
    return i;
}
void QuiDongPS(PhanSo &s1, PhanSo &s2)
{
    s1.tuso *= (BCNN(s1.mauso, s2.mauso) / s1.mauso);
    s2.tuso *= (BCNN(s1.mauso, s2.mauso) / s2.mauso);
    s1.mauso = BCNN(s1.mauso, s2.mauso);
    s2.mauso = BCNN(s1.mauso, s2.mauso);
}
int KTPSAmHayDuong(PhanSo s1)
{
    if (s1.tuso == 0)
        return 0;
    if (s1.tuso < 0)
    {
        if (s1.mauso < 0)
            return 1;
        else
            return -1;
    }
    else if (s1.mauso < 0)
        return -1;
    else
        return 1;
}
void SoSanhPS(PhanSo s1, PhanSo s2)
{
    QuiDongPS(s1, s2);
    if (s1.tuso > s2.tuso)
        printf("%d / %d   lon hon   %d / %d", s1.tuso, s1.mauso, s2.tuso, s2.mauso);
    if (s1.tuso == s2.tuso)
        printf("%d / %d   bang   %d / %d", s1.tuso, s1.mauso, s2.tuso, s2.mauso);
    if (s1.tuso < s2.tuso)
        printf("%d / %d   nho hon   %d / %d", s1.tuso, s1.mauso, s2.tuso, s2.mauso);
}