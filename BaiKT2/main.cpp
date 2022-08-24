#include <stdio.h>
#include <math.h>

// a
typedef struct
{
    float x;
    float y;
} Point;

// b
void NhapDiem(Point &p)
{
    printf("Nhap x: ");
    scanf("%f", &p.x);
    printf("Nhap y: ");
    scanf("%f", &p.y);
}

// c
void InDiem(Point p)
{
    printf("%.2f", p.x);
    printf("\t");
    printf("%.2f", p.y);
    printf("\n");
}

// d
void NhapDSDiem(Point p[], int &n)
{
    printf("Nhap so luong diem: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap toa do diem %d: ", i + 1);
        NhapDiem(p[i]);
    }
}

// e
void InDSDiem(Point p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Toa do diem %d: ", i + 1);
        InDiem(p[i]);
    }
}

// f
void TimDiemGanNhau(Point p[], int n)
{
    if (n < 2)
        printf("Khong the tim 2 diem gan nhau nhat!");
    else
    {
        Point a = p[0], b = p[1];
        int c = 1, e = 2;
        float d = (float)sqrt((p[0].x - p[1].x) * (p[0].x - p[1].x) + (p[0].y - p[1].y) * (p[0].y - p[1].y));
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                float tam = sqrt((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y));
                if (tam < d)
                {
                    d = tam;
                    a.x = p[i].x;
                    a.y = p[i].y;
                    b.x = p[j].x;
                    b.y = p[j].y;
                    c = i + 1;
                    e = j + 1;
                }
            }

        printf("Hai diem gan nhau nhat la: ");
        printf("Diem thu %d: %.2f \t %.2f va Diem thu %d: %.2f \t %.2f", c, a.x, a.y, e, b.x, b.y);
    }
}

// g
void Ghi(Point p[], int n)
{
    FILE *a = fopen("points.txt", "w");
    fprintf(a, "%d\n", n);

    for (int i = 0; i < n; i++)
        fprintf(a, "%.0f %.0f\n", p[i].x, p[i].y);
    fclose(a);
}
// h
void Doc(Point p[], int n)
{
    FILE *a = fopen("points.txt", "r");
    char kt;
    while ((kt = fgetc(a)) != EOF)
        printf("%c", kt);
}

// i
void Xoa(Point p[], int &n, int vitri)
{
    for (int i = vitri; i < n; i++)
        p[i] = p[i + 1];
    n--;
}
void XoaTrung(Point p[], int &n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (p[i].x == p[j].x && p[i].y == p[j].y)
            {
                Xoa(p, n, j);
                j--;
            }
        }
}
int main()
{
    Point p[10];
    int n;
    NhapDSDiem(p, n);
    InDSDiem(p, n);
    TimDiemGanNhau(p, n);
    Ghi(p, n);
    Doc(p, n);
    //	XoaTrung(p, n);
    //	InDSDiem(p, n);
}
