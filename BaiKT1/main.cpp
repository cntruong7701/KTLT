/*
Viết code của bạn ở đây
*/



#include<stdio.h>
#include<math.h>
typedef int m2c[10][10];

void NhapMT(m2c a,int &m, int &n){
    do{
        printf("Nhap hang: ");
        scanf("%d", &m);
        printf("Nhap cot: ");
        scanf("%d", &n);
    } while(m<=00 || n<=0);
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMT(m2c a, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
}

int SoCP(int a){
    if(a<1) return 1;
    int i = sqrt(a);
    if(i*i==a) return 0;
    return 1;
}

int SoCPTrongMT(int a[10][10], int m, int n){
    int dem=0;
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(SoCP(a[i][j])){
                dem +=1;
            }
        }
    }
    return dem;
}

void TongPTCot(int a[10][10],int m,int n){
    for(int j=0; j<m;j++){
        int tong=0;
        for(int i=0;i<n;i++){
            tong = tong + a[i][j];
        }
        printf("\nCot %d co tong la: %d", j, tong);
    }
}

int main()
{
    // Main program
    m2c a;
    int m,n;
    NhapMT(a,m,n);
    XuatMT(a,m,n);
    
    printf("so chinh phuong trong ma tran la: %d", SoCPTrongMT(a,m,n));

    TongPTCot(a,m,n);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}