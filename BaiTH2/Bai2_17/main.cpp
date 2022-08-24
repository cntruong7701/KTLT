#include<stdio.h>

void DiChuyen(int n, char A, char B, char C){
    if(n==1) {
        printf("%c ==> %c\n",A,C);
        return;
    }
    DiChuyen(n-1,A,C,B);
    DiChuyen(1,A,B,C);
    DiChuyen(n-1,B,A,C);
}

int main(){
    char a='A',b='B',c='C';
    int n;
    do
    {
        printf("nhap n: ");
        scanf("%d", &n);
    } while (n<0);
    DiChuyen(n,a,b,c);
}