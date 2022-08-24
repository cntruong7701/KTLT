#include<stdio.h>

struct SinhVien
{
    char maSV[10];
    char tenSV[30];
    float dtb;
};

void readFile(char file[], SinhVien ds[], int &n){
    FILE *textFile = fopen(file, "r");
    n = 0;
    while (fscanf(textFile,"%[^,], %[^,], %f", &ds[n].maSV, &ds[n].tenSV, &ds[n].dtb) != EOF)
        n++;
    fclose(textFile);
    //printf("%d", n);
}

void InDs(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%f\n", a[i].maSV, a[i].tenSV, a[i].dtb);
    }
}

void SapXep(SinhVien a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i].dtb < a[j].dtb){
                SinhVien tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        
    }
    
}

int main(){
    SinhVien sv[100];
    int n;
    char file[] = "dsSinhVien.txt";
    readFile(file, sv, n);
    InDs(sv,n);

    printf("danh sach sinh vien sau khi sap xep la: \n");
    SapXep(sv,n);
    InDs(sv,n);
    return 0;
}