#include<stdio.h>
#define PI 3.14159265358979
int main(void){
    double ban_kinh,dien_tich,chu_vi;
    printf ("Nhap ban kinh : ");
    if(scanf("%lf",&ban_kinh)!=1){
        printf("Loi: Vui long nhap lai.\n");
        return 1;
    }
    dien_tich=ban_kinh*ban_kinh*PI;
    chu_vi=ban_kinh*2*PI;
    printf("Chu vi cua hinh tron la : %.2f\n",chu_vi);
    printf ("Dien tich cua hinh tron la : %.2f\n",dien_tich);
    return 0;
}