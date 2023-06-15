#include <stdio.h>

void main(){
	
	int r,c,k;
	
	for(r=1;r<=5;r++)
	{
		for(k=2;k<=r;k++){
			printf(" ");
		}
		for(c=r;c<=5;c++){
			printf("%d",r%2);
		}
		printf("\n");
	}
}
