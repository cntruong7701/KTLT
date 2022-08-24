#include<stdio.h>

void readFile(char file[], int ds[], int &n){
    FILE *textFile = fopen(file, "r");
    fscanf(textFile, "%d", &n);
    int nPT,i=0;
	while(fscanf(textFile, "%d", &nPT) != EOF)
	{
		ds[i] = nPT;
		i++;
	}
}

void InDs(int ds[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d\t", ds[i]);

}

void SapXep(int ds[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(ds[i]>ds[j])
			{
				int tam = ds[i];
				ds[i] = ds[j];
				ds[j] = tam;
			}
		}
	}
}

void luuFile(int ds[], int n)
{
	FILE *textFile = fopen("SapXep.txt", "w");
	for(int i=0; i<n; i++)
		fprintf(textFile, "%d\t", ds[i]);
	fclose(textFile);
}

int main(){
    int ds[100],n;
    char file[] = "SoNguyen.txt";
    readFile(file,ds,n);
    InDs(ds,n);
    printf("\ndanh sach sau khi sap xep: \n");
    SapXep(ds,n);
    InDs(ds,n);
    luuFile(ds,n);
}