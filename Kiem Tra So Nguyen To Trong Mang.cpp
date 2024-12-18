#include<stdio.h>
int main(){
	int arrray[5];
	for(int i=0;i<5;i++){
		printf(" moi ban nhap phan tu thu %d\n",i);
		scanf("%d",&arrray[i]);
	}
		printf("cac so nguyen to trong mang la");
	for(int i=0;i<5;i++){
		int isPrime = 1; 
		        if (arrray[i] <= 1) {
		            isPrime = 0; 
		        } else {
		for(int j=2;j<i;j++){
			if(arrray[i]%j==0){
			
				isPrime=0;
			}
			}if(isPrime){
				printf(" %d ",arrray[i]);
			}
		        }
	}return 0;
}
