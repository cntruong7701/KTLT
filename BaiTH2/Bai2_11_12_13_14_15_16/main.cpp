#include<stdio.h>

// Câu 2.11
int MaxTN(int n){
    int i,max=0;
    do
    {
        i = n%10;
        if(i>max){
            max = i;
        }
    } while (n=n/10);
    return max;
}

int MaxTNDQ(int n){
    if(n<10) return n;
    if((n%10) > MaxTNDQ(n/10))  return n%10;
    return MaxTNDQ(n/10);
}

// Câu 2.12

int SumTN(int n){
    int i,sum=0;
    do
    {
        i = n%10;
        sum = sum+i;
    } while (n=n/10);
    return sum;
}

int SumTNDQ(int n){
    if(n<10) return n;
    return n%10 + SumTNDQ(n/10);
}


// Câu 2.13
int SDN(int n){
    int sum=0;
    while (n>=1)
    {
        int i = n%10;
        sum = sum*10 + i;
        n = n/10;
    }
    return sum;
}

void SDNDQ(int n){
    if(n!=0){
        printf("%d", n%10);
        SDNDQ(n/10);
    }
}

// Câu 2.14
int UC(int a, int b){
    if(b==0) return a;
    if(a%b==0) return b;
    return UC(b,a%b);
}

// Câu 2.15
float Tinh(int n){
    float s=0, t=0;
    for (int i = 1; i <= n; i++)
    {
        t+=i;
        s = s + (float)1/t;
    }
    return s;
}

// Câu 2.16
int Tong(int n){
    int s=0,t=0;
    for (int i = 1; i <= n; i++)
    {
        t+=i;
        s+=t;
    }
    return s;
}

int TongDQ(int n){
    if(n==1) return n;
    return TongDQ(n) + TongDQ(n - 1);
}

int main(){
    printf("So lon nhat khong dung de quy: %d\n", MaxTN(1234));
    printf("So lon nhat khong dung de quy: %d\n", MaxTNDQ(1294));


    printf("tong cac so khong dung de quy: %d\n", SumTN(1234));
    printf("tong cac so khong dung de quy: %d\n", SumTNDQ(1294));

    int a=14567;
    printf("so dao nguoc cua %d la: ", a);
    SDNDQ(a);

    printf("\nuoc chung cua hai so la: %d\n", UC(9,6));

    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<0);
    printf("ket qua la: %.1f", Tinh(n));
    // Câu 2.16
    printf("ket qua la: %d", Tong(n));
}