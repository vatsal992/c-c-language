#include<stdio.h>

void main(){
	
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	
	printf("length of the 2d array : %d",sizeof(a)/sizeof(a[0][0]));
}