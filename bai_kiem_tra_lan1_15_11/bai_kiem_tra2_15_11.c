#include<stdio.h>
int main(void){
    //Phần 1
    char ki_tu;
    printf("Nhap ki tu : ");
    scanf(" %c", &ki_tu);
    printf("Ki tu: %c\tMa so cua chu thuong la : %d\n", ki_tu,ki_tu);
    printf("Chu hoa: %c\tMa so cua chu hoa la : %d\n", ki_tu-('a'-'A'),ki_tu-('a'-'A'));
    //Phần 2
    long long a=100000;
    long long b=100000;
    long long tich = a*b;
    printf("Tich : %lld\n",tich);
    printf("kich thuoc cua kieu du lieu : %zu byte\n",sizeof(long long));
    //1.Vì khi lấy int a int b nhân với nhau thì kết quả vẫn đang ở kiểu int dẫn đến là bị tràn số ở kiểu int vì số quá lớn và hai số a và b nhân với nhau vẫn chưa phụ thuộc vào biến tích nên mới xảy ra hiện tượng tràn số.
    //2.Mình sửa bằng cách chuyển kiểu giá trị từ int sang long long và biến tich vẫn giữ nguyên là long long .
    return 0;
}