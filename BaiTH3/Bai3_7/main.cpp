#include<stdio.h>

int main(int argc, char *argv[]){
    FILE *textFile = fopen(argv[1], "r");
    char file[400];
    while (fgets(file,400,textFile) != NULL)
    {
        printf("%s", file);
    }
    fclose(textFile);
    return 0;
}