//Viết chương trình giải quyết câu 1 của bạn ở đây
#include<stdio.h>
struct Point{
    float x;
    float y;
}p;

void NhapDiem(Point &p){
    printf("Nhap x: ");
    scanf("%f", &p.x);
    printf("Nhap y: ");
    scanf("%f", &p.y);
}

void InDiem(Point p){
    printf("(%.0f,%.0f)", p.x, p.y);
}

void NhapDSDiem(Point p[], int &n){
    for(int i=0;i<n;i++){
        NhapDiem(p[i]);
    }
}

void InDSDiem(Point p[], int n){
    for(int i=0;i<n;i++){
        InDiem(p[i]);
    }
}

void InDS(int ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ds[i]);
    }
}

void ghi(Point p[], int n){
    FILE *f = fopen("points.txt", "w");
    fprintf(f, "\n%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%.0f %.0f\n", p[i].x, p[i].y);
    }
    fclose(f);
    
}

void doc(Point p[], int n){
    FILE *f = fopen("points.txt", "r");
    char kt;
    while ((kt = fgetc(f))!= EOF)
    {
        printf("%c", kt);
    }
    
}

int main()
{
    // Main program
    Point p[100];
    int ds[100];
    int n;
    printf("Nhap so diem: ");
    scanf("%d", &n);
    NhapDSDiem(p,n);
    InDSDiem(p,n);
    
    ghi(p,n);
    doc(p,n);
    // fclose(fileOutput);
    

    
}