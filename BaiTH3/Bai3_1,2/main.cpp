#include<stdio.h>
#include <stdlib.h>


void DocFile(char file[]){
    FILE *fileText;
    fileText = fopen(file,"r");
    if (fileText == NULL)   
    {
        printf("khong mo duoc file %s ", file);
    }
    else{
        while (!feof(fileText))
        {
            printf("%c",fgetc(fileText));
        }
        
    }
}

void DocFile2(char ten[])
{
	FILE *a = fopen(ten, "r");
	if(a==NULL) printf("khong doc dc tep");
	char b[200];
	while(fgets(b, 200, a) != NULL)
		printf("%s", b);
	fclose(a);
}

long int FileSize(char file[])
{
    FILE *filesize;
    filesize = fopen(file,"r");
    if (filesize==NULL)
    {
        printf("file %s khong ton tai.", file);
        return -1;
    }

    fseek(filesize, 0L, SEEK_END);
    //Hàm long int ftell(FILE *stream) trong Thư viện C chuẩn trả về vị trí file hiện tại của Stream đã cho.
    long int res = ftell(filesize);
    
    return res;
}

int main(){
    char file[] = "tiengthu.txt";
    DocFile(file);
    DocFile2(file);
    long int size = FileSize(file);
    if(size != -1){
        printf("\nkich thuong cua file %s la: %ld bytes \n",file, size);
    }

}