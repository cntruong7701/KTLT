#include<stdio.h>
#define size 20
#define max 50

typedef int matran[size][size];

void nhapMT(matran, int &, int &);
void inMT(matran, int, int);
float tbcMT(matran, int, int);
int maxMT(matran, int, int);
void maxiMT(matran, int, int);
void maxjMT(matran, int, int);
int LaSNT(int n);
int SNTTrongMT(matran, int, int);
void SapXepMT(matran, int, int);
