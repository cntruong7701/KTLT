#include<stdio.h>
#include"GopMang.h"

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

void Tron(MangSN a1, int n1, MangSN a2, int n2, MangSN a, int &n){
    n = n1+n2;
    for (int i = 0; i < n1; i++)
    {
        a[i] = a1[i];
    }
    for (int i = n1; i < n; i++)
    {
        a[i] = a2[i-n1];
    }
    SapXepTangDan(a,n);
}