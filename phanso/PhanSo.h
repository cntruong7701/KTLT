typedef struct 
{
    int tuSo=0;
    int mauSo=1;
}PhanSo;

void NhapPS(PhanSo &);
void XuatPS(PhanSo);
void RutGonPS(PhanSo &);
void CongPS(PhanSo p1, PhanSo p2, PhanSo &);
PhanSo TongPS(PhanSo p1, PhanSo p2);

void NhapDSPS(PhanSo ps[], int &n);
void XuatDSPS(PhanSo ps[], int &n);
