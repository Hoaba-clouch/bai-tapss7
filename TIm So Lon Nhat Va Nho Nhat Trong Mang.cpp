#include<stdio.h>
int main(){
	int arrray[5]={1,5,4,3,5};
    int temp=0;
    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++){
			if(arrray[i] >arrray[j]){
			temp= arrray[j];
			arrray[j]=arrray[i];
			arrray[i]=temp;
		}
		}
    }printf( "so lon nhat trong mang la %d\n",arrray[0]);
     printf( "so nho nhat trong mang la %d\n",arrray[4]);
	return 0;
	
}
