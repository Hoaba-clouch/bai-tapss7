#include<stdio.h>
int main(){
	int arrray[5];
	for(int i=0;i<5;i++){
		do{
		printf(" moi ban nhap phan tu thu %d\n",i);
		scanf("%d",&arrray[i]);
		
	}while(arrray[i]%2==0);
	}
	for(int i=0;i<5;i++){
			printf(" \n%d ", arrray[i]);

	
	}
	
	return 0;
	
}
