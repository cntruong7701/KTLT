#include<stdio.h>
#include<math.h>

int PTBat2(int a, int b, int c, float &x, float &x1, float &x2){
    float delta = b*b - 4*a*c;
    if(a==0){
        if(b==0){
            if(c==0) return 2;
            else return -1;
        } else{
            x = -c/b;
            return 0;
        }
    }else{
        if(delta<0) return -1;
        else{
            if (delta==0)
            {
                x=(float) -b/(2*a);
                return 0;
            }else{
                delta = sqrt(delta);
                x1 = (float)(-b + delta) / (2*a);
                x2 = (float)(-b - delta) / (2*a);
                return 1;
            }
        }
    }
}

int main(){
    FILE *fileInput = fopen("input.txt", "r");
    FILE *fileOutput = fopen("output.txt", "w");
    float a,b,c;
    float x,x1,x2;
    while (fscanf(fileInput, "%f %f %f", &a, &b, &c) != EOF)
    {
        printf("\n%fx^2 + %fx + %f = 0\n",a,b,c);
        
        if(PTBat2(a,b,c,x,x1,x2) == -1){
            printf("\tPhuong trinh vo nghiem!");
            fputs("\nPhuong trin vo nghiem!", fileOutput);
        } else if (PTBat2(a,b,c,x,x1,x2)==0)
        {
            printf("Phuong trinh co nghiem kep x1 = x2 = %f", x);
            fprintf(fileOutput,"\nPhuong trinh co nghiem kep x1 = x2 = %f", x);
        } else if (PTBat2(a,b,c,x,x1,x2) == 1)
        {
            printf("phuong trinh co hai nghiem phan biet x1 = %f, x2 = %f",x1,x2);
            fprintf(fileOutput,"\nphuong trinh co hai nghiem phan biet x1 = %f, x2 = %f",x1,x2);
        } else{
            printf("\tPhuong trinh vo so nghiem.");
            fputs("\nPhuong trinh vo so nghiem.", fileOutput);
        }
    }
    
    return 0;
}