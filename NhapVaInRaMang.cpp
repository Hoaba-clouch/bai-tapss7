#include<stdio.h>
int main(){
	int arrray[5];
	for(int i=0;i<5;i++){
		printf(" moi ban nhap phan tu thu %d\n",i);
		scanf("%d",&arrray[i]);
	}
	printf("mang ban vua nhap la\n");
	for(int i=0;i<5;i++){
		printf(" \n%d ", arrray[i]);
	}
	return 0;
	
}
