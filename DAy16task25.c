#include<stdio.h>

void main(){
	
	int r,c,k;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++){
			printf("%d",c);
		}
		printf("\n");
	}
	
	for(r=4;r>=1;r--){
		for(c=1;c<=r;c++){
			printf("%d",c);
		}
		printf("\n");
	}
}