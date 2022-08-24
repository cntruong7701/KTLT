#include <stdio.h>

struct PhanSo
{
    int tuSo=0;
    int mauSo=1;
};

void NhapPS(PhanSo &p);
void XuatPS(PhanSo p);
int UCLN(int a, int b);
int KiemTra(PhanSo p);
int Max(int a, int b);
PhanSo RutGonPS(PhanSo p);

PhanSo CongPS(PhanSo p1, PhanSo p2);
PhanSo truPS(PhanSo p1, PhanSo p2);
PhanSo nhanPS(PhanSo p1, PhanSo p2);
PhanSo chiaPS(PhanSo p1, PhanSo p2);

void quydongPS(PhanSo &p1, PhanSo &p2);

int ktAmDuong(PhanSo p);

void sosanhPS(PhanSo a, PhanSo b);
