#include <stdio.h>
#include <math.h>
#include "DonThuc.h"

void NhapDonThuc(DonThuc &dt){
    float heso;
    printf("nhap he so: ");
    scanf("%f", &heso);
    dt.heSo = heso;

    printf("nhap so mu: ");
    scanf("%d", &dt.soMu);
}

void XuatDonThuc(DonThuc dt){
    printf("%.0fx^%d", dt.heSo, dt.soMu);
}

DonThuc Tich(DonThuc a, DonThuc b){
    DonThuc dt;
    dt.heSo = a.heSo*b.heSo;
    dt.soMu = a.soMu+b.soMu;
    return dt;
}

DonThuc Thuong(DonThuc a, DonThuc b){
    DonThuc dt;
    dt.heSo = a.heSo / b.heSo;
    dt.soMu = a.soMu - b.soMu;
    return dt;
}

DonThuc DHCap1(DonThuc a){
    DonThuc c;
    c.heSo = a.heSo*a.soMu;
    c.soMu = a.soMu-1;
    return c;
}

DonThuc DHCapK(DonThuc a, int k){
    
    while (k!=0)
    {
        a = DHCap1(a);
        k--;
    }
    
    return a;
}

double GiaTriDT(DonThuc a, int x){
    return a.heSo*pow((double)x,a.soMu);
}