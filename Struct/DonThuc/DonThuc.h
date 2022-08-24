#include <stdio.h>
struct DonThuc
{
    float heSo;
    int soMu;
};

void NhapDonThuc(DonThuc &);
void XuatDonThuc(DonThuc);

DonThuc Tich(DonThuc a, DonThuc b);
DonThuc Thuong(DonThuc a, DonThuc b);
DonThuc DHCap1(DonThuc a);
DonThuc DHCapK(DonThuc a, int k);

double GiaTriDT(DonThuc a, int x);


