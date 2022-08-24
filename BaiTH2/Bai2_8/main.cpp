#include<stdio.h>

int C(int k, int n){
    if(k==0||k==n) return 1;
    if(k>n) return 0;
    else return C(k-1,n-1) + C(k-1,n);
}

int main(){
    int k,n;
    do
    {
        printf("nhap k: ");
        scanf("%d", &k);
    } while (k<0);
    
    printf("nhap n: ");
    scanf("%d", &n);

    printf("gia tri cua C la: %d", C(k,n));
}