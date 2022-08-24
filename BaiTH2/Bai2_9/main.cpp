#include<stdio.h>
#include<string.h>

const char x[]={
    '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
    'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z','W'
};

void ChuyenDoi(int n, int b){
    char s[100];//mảng kết quả chia dư
    if(n==0){
        printf("0\n");
    }else{
        int i = 0;
        while (n)
        {
            int temp = n%b;//lấy phần dư
            n/=b;//lấy phần nguyên

            s[i++] = x[temp];
        }
        s[i]='\0';//cắt đuôi (vị trí null)
        strrev(s);//đọc ngược => kết qủa
        puts(s);//hiển thị lên màng hình
    }
}

void ChuyenDoiDQ(int a, int b){
    if(a>=b) ChuyenDoiDQ(a/b,b);
    if(a%b>9) printf("%c", (char)a%b+55);//
    else{
        printf("%d",a%b);
    }
}

int MaxTN(int n){
    int i,max=0;
    do
    {
        i = n%10;
        if(i>max){
            max = i;
        }
    } while (n=n/10);
    return max;
}



int main(){
    ChuyenDoi(31,16);
    ChuyenDoiDQ(31,16);

    printf("\nSo lon nhat khong dung de quy: %d\n", MaxTN(1234));
}