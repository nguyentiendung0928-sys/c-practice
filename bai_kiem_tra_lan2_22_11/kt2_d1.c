#include <stdio.h>
int main(void)
{
    double diem_toan, diem_ly, diem_hoa;
    double diem_trung_binh;
    printf("Nhap diem toan, ly, hoa: ");
    if (scanf("%lf %lf %lf", &diem_toan, &diem_ly, &diem_hoa) != 3)
    {
        printf("Loi nhap\n");
        return 1;
    }
    if ((diem_toan < 0 || diem_toan > 10) || (diem_hoa < 0 || diem_hoa > 10) || (diem_ly < 0 || diem_ly > 10))
    {
        printf("Loi: diem phai tu 0 den 10\n");
        return 1;
    }
    diem_trung_binh = (diem_toan + diem_ly + diem_hoa) / 3;
    printf("Diem trung binh: %.2f\n", diem_trung_binh);
    if (diem_trung_binh >= 8)
    {
        printf("Xep loai: Gioi\n");
    }
    else if (diem_trung_binh >= 6.5)
    {
        printf("Xep loai: Kha\n");
    }
    else if (diem_trung_binh >= 5)
    {
        printf("Xep loai: Trung binh\n");
    }
    else
    {
        printf("Xep loai: Yeu\n");
    }
    return 0;
}