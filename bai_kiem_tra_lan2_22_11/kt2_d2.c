#include <stdio.h>
int main(void)
{
    int ngay, thang, nam;
    int so_ngay_trong_thang;
    int ngay_moi, thang_moi, nam_moi;
    printf("Nhap ngay thang nam: ");
    if (scanf("%d %d %d", &ngay, &thang, &nam) != 3)
    {
        printf("Loi nhap\n");
        return 1;
    }
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        so_ngay_trong_thang = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        so_ngay_trong_thang = 30;
        break;
    case 2:
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
        {
            so_ngay_trong_thang = 29;
        }
        else
        {
            so_ngay_trong_thang = 28;
        }
        break;
    default:
        printf("Thang khong hop le\n");
        return 1;
    }
    if (nam < 1 || nam > 9999 || thang < 1 || thang > 12 || ngay < 1 || ngay > so_ngay_trong_thang)
    {
        printf("Loi: ngay thang nam khong hop le\n");
        return 1;
    }
    if (ngay < so_ngay_trong_thang)
    {
        ngay_moi = ++ngay;
        thang_moi = thang;
        nam_moi = nam;
    }
    else if (ngay == so_ngay_trong_thang && thang < 12)
    {
        ngay_moi = 1;
        thang_moi = ++thang;
        nam_moi = nam;
    }
    else if (ngay == so_ngay_trong_thang && thang == 12)
    {
        ngay_moi = 1;
        thang_moi = 1;
        nam_moi = ++nam;
    }
    printf("Ngay hom sau: %02d/%02d/%d\n", ngay_moi, thang_moi, nam_moi);
    return 0;
}