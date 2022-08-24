#include <stdio.h>
#include <math.h>
#include "PhanSo.h"

void NhapPS(PhanSo &p){
    printf("Nhap tu so: ");
    scanf("%d", &p.tuSo);
    do
    {
        printf("Nhap mau so: ");
        scanf("%d", &p.mauSo);
    } while (p.mauSo==0);
}

void XuatPS(PhanSo p){
    printf("%d/%d", p.tuSo, p.mauSo);
}

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

PhanSo RutGonPS(PhanSo p)
{
    PhanSo c;
    c.tuSo = p.tuSo / UCLN(p.tuSo, p.mauSo);
    c.mauSo = p.mauSo / UCLN(p.tuSo, p.mauSo);
    return c;
}

PhanSo CongPS(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tuSo = a.tuSo * b.mauSo + a.mauSo * b.tuSo;
    c.mauSo = a.mauSo * b.mauSo;
    c = RutGonPS(c);
    return c;
}
 
PhanSo truPS(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tuSo = a.tuSo * b.mauSo - a.mauSo * b.tuSo;
    c.mauSo = a.mauSo * b.mauSo;
    c = RutGonPS(c);
    return c;
}
 
PhanSo nhanPS(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tuSo = a.tuSo * b.tuSo;
    c.mauSo = a.mauSo * b.mauSo;
    c = RutGonPS(c);
    return c;
}
 
PhanSo chiaPS(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tuSo = a.tuSo * b.mauSo;
    c.mauSo = a.mauSo * b.tuSo;
    c = RutGonPS(c);
    return c;
}


int KiemTra(PhanSo p) // a/b
{
    for(int i=2; i<=p.tuSo && i<=p.mauSo; i++)
        if(p.tuSo%i==0 && p.mauSo%i==0)
             return 0; // khong toi gian
    return 1; // toi gian
}

int Max(int a, int b){
    //toán tử 3 ngôi nếu a>=3 đúng thì lấy a sai thì lấy b
    return (a>=b) ? a : b;
}

void quydongPS(PhanSo &p1, PhanSo &p2){

    int bcnn = p1.mauSo*p2.mauSo / UCLN(p1.mauSo,p2.mauSo);
    p1.tuSo = p1.tuSo*bcnn/p1.mauSo;
    p2.tuSo = p2.tuSo*bcnn/p2.mauSo;
    p1.mauSo = bcnn;
    p2.mauSo = bcnn;
    
}

int ktAmDuong(PhanSo p){
    if(p.tuSo == 0){
        return 0;
    }
    if (p.tuSo < 0)
    {
        if(p.mauSo<0){
            return 1;
        }else{
            return -1;
        }
    }else{
        if(p.mauSo>0){
            return 1;
        }else return -1;
    }
}

void sosanhPS(PhanSo a, PhanSo b){
    quydongPS(a,b);
    if(a.tuSo > b.tuSo){
        printf("Phan so a lon hon phan so b!");
    }else if(a.tuSo < b.tuSo){
        printf("Phan So a nho hon phan so b");
    }else if(a.tuSo == b.tuSo){
        printf("2 phan so bang nhau");
    }
}