#include <stdio.h>
#include "Bai2.h"

void readFile(char file[], int ds[], int &n)
{
    FILE *f = fopen(file, "r");
    fscanf(f, "%d", &n);
    int nPt, i = 0;
    while (fscanf(f, "%d", &nPt) != EOF)
    {
        ds[i] = nPt;
        i++;
    }
}

void InDS(int ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ds[i]);
    }
}

bool timkiem(int ds[], int n, int x)
{
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ds[mid] == x)
            {
                return true;
            }
            else if (ds[mid] > x)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }

    return false;
}