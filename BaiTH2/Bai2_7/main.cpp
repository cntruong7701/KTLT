#include<stdio.h>


int GT(int k, int n){
    if(k==0|| k==n){
        return 1;
    } else 
        return GT(k-1,n-1) + GT(k, n-1);
}

void TamGiacPCDQ(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("  ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf(" %3d", GT(j,i));
        }
        printf("\n");
    }
    
}


//tam giác pascal không đệ quy
void TamGiacPC(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            int iGT=1;
            for(int k = 1;k <= i;k++){
                iGT *=k;
            }

            int jGT=1;
            for(int k = 1;k <= j;k++){
                jGT *=k;
            }

            int ijGT=1;
            for(int k = 1;k <= (i-j);k++){
                ijGT *=k;
            }

            int toHop = iGT/(ijGT * jGT);
            printf(" %3d", toHop);
        }
        printf("\n");
    }
    
}

int main(){
    int n =7;
    printf("Tam Giac pascal dung de quy: \n");
    TamGiacPCDQ(n);
    printf("\nTam Giac pascal khong dung de quy: \n");
    TamGiacPC(n);

    printf("%d",GT(0,2));
}