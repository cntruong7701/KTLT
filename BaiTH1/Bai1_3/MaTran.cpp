#include<stdio.h>
#include"MaTran.h"

void nhapMT(matran a, int &m, int &n){
    do
    {
        printf("nhap so hang: ");
        scanf("%d", &m);
        printf("nhap so cop: ");
        scanf("%d", &n);
    } while (m<=0 || n<=0);
    

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
        
    }
}

void inMT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        {
            for(int j=0; j < n; j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
}

float tbcMT(matran a, int m, int n){
    int tong =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += a[i][j];
        }
        
    }

    float tbc = (float)tong/(m*n);
    return tbc;
    
}

int maxMT(matran a, int m, int n){
    int Max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(Max < a[i][j]) Max = a[i][j];
        }
    }
    return Max;
}

void maxiMT(matran a, int m, int n){
    int Max;
    for (int i = 0; i < m; i++)
    {
        Max = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] > Max) Max = a[i][j];
        }
        printf("max tren hang %d: %d\n", i, Max);
    }
}

void maxjMT(matran a, int m, int n){
    int Max;
    for (int j = 0; j < n; j++)
    {
        Max = a[0][j];
        for (int i = 0; i < m; i++)
        {
            if(a[i][j] > Max) Max = a[i][j];
        }
        printf("max tren cot %d: %d\n", j, Max);
    }
}

int LaSNT(int n)
{
    if(n < 2) return 0;
    for(int i=2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

int SNTTrongMT(matran a, int m, int n){
    int dem=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(LaSNT(a[i][j])){
                dem += 1;
            }
        }
        
    }
    return dem;
}

void SapXepMT(matran a, int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(a[i][j] > a[i][k]){
                    int tam = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tam;
                }
            }
            
        }
        
    }
    
}