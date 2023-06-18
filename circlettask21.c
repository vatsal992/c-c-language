#include<stdio.h>

void main(){
	
	int r,c,k=1;
	
	for(r=5;r>=1;r--){
		for(c=r;c<=5;c++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
