#include "PhanSo.h"
#include "PhanSo.cpp"
#include <stdio.h>

int main(){
    PhanSo p1;
    NhapPS(p1);
    XuatPS(p1);
    
    printf("\n rút gọn phân số: ");
    RutGonPS(p1);
    XuatPS(p1);
}
