#include<stdio.h>
#include"mang.h"

void NhapMang(Mang a, int &n){
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n<0 || n>MAX);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    } 
}

void XuatMang(Mang a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int TongPT(Mang a, int n){
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        tong =tong + a[i] ;
    }
    return tong;
}

int TongPTDQ(Mang a, int n){
    if(n==1) return a[0];
    return a[n-1] + TongPTDQ(a, n-1);
}

int TongSoDuongPT(Mang a, int n){
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            tong =tong + a[i] ;
        }
    }
    return tong;
}

int TongSoDuongPTDQ(Mang a, int n){
    if(n==0) return 0;
    if (a[n-1]>0) 
        return a[n-1] + TongSoDuongPTDQ(a,n-1);
    return  TongSoDuongPTDQ(a,n-1);
}

int SoNT(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int DemSNT(Mang a, int n){
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if(SoNT(a[i])){
            dem++;
        }
    }
    return dem;
}

int DemSNTDQ(Mang a, int n){
    if(n==0) return 0;
    if(SoNT(a[n])) return 1+DemSNTDQ(a,n-1);
    return DemSNTDQ(a,n-1);
}

int Max(Mang a, int n){
    int max=a[0];
    for (int i = 1; i <= n; i++)
    {
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}

int MaxDQ(Mang a, int n){
    if(n==0) return 0;
    if(n==1) return a[0];
    if (a[n-1]>MaxDQ(a,n-1))
    {
        return a[n-1];
    }
    return MaxDQ(a,n-1);
}
