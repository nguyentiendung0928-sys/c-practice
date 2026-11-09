#include<stdio.h>
int main(){
	int n,i,snt=1;
	printf("nhap so nguyen n:"); scanf("%d",&n);
	if(n<2){
		snt=0;
		}
		else{
			for(i=2;i<n;i++){
				if(n%i==0){
					snt=0;
					break;
				}
			}
		}
    if(snt==1){
    	printf("%d la so nguyen to.\n",n);
    }
    else{
    	printf("%d khong phai la so nguyen to.\n",n);
	}
	return 0;
	}
