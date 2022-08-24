#include<stdio.h>
#include<math.h>
#include"MangSN.h"

void NhapMang(MangSN a, int &n){
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

void XuatMang(MangSN a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int SNT(int a){
    if(a < 2) return 0;
    for(int i=2; i <= a/2; i++)
        if(a % i == 0) return 0;
    return 1;
}

void InDsSNT(MangSN a, int n){
    for (int i = 0; i < n; i++)
    {
        if(SNT(a[i])==1){
            printf("%d ",a[i]);
        }
    }
    
}

void SoChinhPhuong(MangSN a, int n){
    float x,y;
    for (int i = 0; i < n; i++)
    {
        x = sqrt(a[i]);
        y = (int)x;
        if(x == y){
            printf("%d ", a[i]);
        }
    }  
}

float TinhTB(MangSN a, int n){
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }

    return (float)tong / n; 
}

void MaxTB(MangSN a, int n){
    for (int i = 0; i < n; i++)
    {
        if(a[i] > TinhTB(a,n)){
            printf("%d ", a[i]);
        }
    }
}

int Max(MangSN a, int n){
    int max = a[0];
    for(int i=1; i < n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}

int MangTangDan(MangSN a, int n){
    for (int i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
            return 0;
    }
    return 1;
    
}

void SapXepTangDan(MangSN a, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] > a[j]){
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
        
    }
    
}

void SapXepGiamDan(MangSN a, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] < a[j]){
                int tam = a[j];
                a[j] = a[i];
                a[i] = tam;
            }
        }
        
    } 
}