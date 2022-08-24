#include<stdio.h>
#include<math.h>

void GiaiPT(char file[]){
    FILE *textFile = fopen(file, "r");

    if (textFile==NULL)
    {
        printf("file %s khong ton tai.", file);
    }

    int a,b,c;
    float x,x1,x2;
    fscanf(textFile,"%d %d %d", &a, &b, &c);
    float delta = b*b - 4*a*c;
    if(delta<0){
        printf("phuong trinh vo nghiem.");
    }else if (delta==0)
    {
        x = (float)-b/(2*a);
        printf("phuong trinh co nghiem kep x1 = x2 = %f", x);
    }else{
        delta = sqrt(delta);
        x1 = (float)(-b + delta) / (2*a);
        x2 = (float)(-b - delta) / (2*a);
        printf("phuong trinh co 2 nghiem phan biet: x1 = %f, x2 = %f", x1, x2);
    }
    
    
}

int main(){
    char file[] = "./pt.txt";
    GiaiPT(file);

    return 0;
}