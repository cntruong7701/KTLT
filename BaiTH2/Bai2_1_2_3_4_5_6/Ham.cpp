#include<stdio.h>
#include"Ham.h"
#include<math.h>

float LuyThua(float x, int n){
    float kq = 1;
    if(n==0) return 1;
    if(n>0){
        for (int i = 1; i <= n; i++)
        {
            kq = kq * x;
        }
        return kq;
    } else{
        for(int i = 1;i <= abs(n); i++){
            kq = kq * x;
        }
        return  1/kq;
    }
}

float LuyThuaDQ(float x, int n){
    if(x==0) return 0;
    if(n==0) return 1;
    if (n>0)
    {
        return LuyThuaDQ(x, n-1)*x;
    } else{
        return 1/x*LuyThuaDQ(x, n+1);
    }
}

int GiaiThua(int n){
    int kq = 1;
    for (int i = 1; i <= n; i++)
    {
        kq = kq * i;
    }
    return kq;
}

int GiaiThuaDQ(int n){
    if(n==1) return 1;
    else return GiaiThuaDQ(n-1)*n;
}

int Tong(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum = sum +i;
    }
    return sum;
}

int TongDQ(int n){
    if(n==1) return 1;
    return n+TongDQ(n-1);
}

int Tongle(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong = tong + (2*i - 1);
    }
    return tong;
}

int TongleDQ(int n){
    if (n==1) return 1;
    return (2*n - 1) + TongleDQ(n-1);
}

int Tongchan(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong = tong + (2*i);
    }
    return tong;
}

int TongchanDQ(int n){
    if (n==1) return 2;
    return 2*n + TongchanDQ(n-1);
}

int SoNT(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int TongSoNT(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if(SoNT(i)){
            tong  = tong + i;
        }
    }
    return tong;
}

int TongSoNTDQ(int n){
    if (n==1)
    {
        return 1;
    }
    if (SoNT(n))
    {
        return n + TongSoNTDQ(n-1);
    }else return TongSoNTDQ(n-1);
}

int DemSNT(int n){
    int dem=0;
    for(int i = 1;i<=n;i++){
        if(SoNT(i)){
            dem++;
        }
    }
    return dem;
}

int DemSNTDQ(int n){
    if(n<0) return 0;
    if(SoNT(n)) return 1 + DemSNTDQ(n-1);
    return DemSNTDQ(n-1);
}


// Câu 2.2
int Fibonacci(int n){
    int a = 1, b = 1;
    int c;
    if(n==1 || n==2) return 1;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int FibonacciDQ(int n){
    if (n==1||n==2)
    {
        return 1;
    }
    return FibonacciDQ(n-1) + FibonacciDQ(n-2);
}

// Câu 2.3
int TongSoVT(int n, int h,int k){
    int tong = 0;
    for (int i = 0; i < h; i++)
    {
        tong = n*k;
        n = tong;
    }
    return tong;
}

int TongSoVTDQ(int n, int h,int k){
    if(h==0) return n;
    return k*TongSoVTDQ(n,h-1,k);
}

// Câu 2.4
float LaiSuat(float m, float r, int n){ 
    float tien = m;
    for (int i = 0; i < n; i++)
    {
        tien = tien + tien*(r/100);
    }
    return tien;
}

float LaiSuatDQ(float m, float r, int n){
    if(n==0) return m;
    return LaiSuatDQ(m,r,n-1)*(r/100) + LaiSuatDQ(m,r,n-1);
}

// Câu 2.5
int Tim(int a[], int x, int n){
    if(n==0) return -1;
    if(x==a[n-1]) return n-1;
    else{
        return Tim(a,x,n-1);
    }
}

//Câu 2.6
int DoDaiChuoi(char *s, int n){
    if (s[n] == '\0')
    {
        return n;
    }
    else return DoDaiChuoi(s,n+1);
}