#include<stdio.h>
int main(){
	int arrray[5]={1,5,4,3,5};
    int check=0;
    for(int i=0;i<5;i++){
		if(arrray[i]%2==0 ){
		printf(" \n%d ", arrray[i]);
		check=1;
		}
		}if (check==0){
			printf("mang khong chua so chan");
		}
	
	return 0;
	
}
