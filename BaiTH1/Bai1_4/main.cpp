#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 4){
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        char op = *argv[2];
        switch (op)
        {
            case '+':
                printf("%d + %d = %d", x, y, x + y);
                break;
            case '-':
                printf("%d - %d = %d", x, y, x - y);
                break;
            case '*':
                printf("%d * %d = %d", x, y, x * y);
                break;
            case '/':
                if(y == 0){
                    printf("Khong the chia cho 0!");
                }else{
                    printf("%d / %d = %.2f", x, y, (float)x / y);
                }
                break;
        }
    } else printf("can dung dinh dang VD: compute 1 + 3");
}