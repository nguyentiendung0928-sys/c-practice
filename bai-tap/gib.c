#include<stdio.h>
int main(){
	int n,i,dem=0;
	printf("nhap n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			if(i%2!=0){
				dem=i;
				dem++;
			}
		}
	}
	if(dem==n || dem==2){
		printf("la so nguyen to");
	}
	else{
		printf("khong la so nguyen to");
	}
}