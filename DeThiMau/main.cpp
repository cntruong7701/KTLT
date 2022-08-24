#include<stdio.h>
#include"Bai2.h"
int main(){
    int ds[100], n;
    char file[] = "INP.DAT";
    readFile(file,ds,n);
    InDS(ds,n);
    printf("\n");
    if(timkiem(ds,n,3)) printf("dung");
    else printf("sai");
}