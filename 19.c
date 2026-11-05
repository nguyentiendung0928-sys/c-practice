#include<stdio.h>
double giai_thua(int k){
	double kq=1;
	int i;
	for(i=1;i<=k;i++){
		kq=kq*i;
	}
	return kq;
}
double luy_thua(double x,int k){
	double kq=1;
	int i;
	for(i=1;i<=k;i++){
		kq=kq*x;
	}
	return kq;
}
double tongS(double x,int n){
	double S=1;
	int i;
	for(i=0;i<=n;i++){
		S= S+luy_thua(x,(2*i)+1)/giai_thua((2*i)+1);
	}
	return S;
}
int main(){
	int n; 
	double x;
	printf("Nhap n ");
	scanf("%d",&n);
	printf("Nhap x ");
	scanf("%lf",&x);
	
	printf("Tong S=%.2lf",tongS(x,n));
}