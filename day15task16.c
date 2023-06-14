#include <stdio.h>

void main(){
	
	int r,c;
	
	for(r=0;r<=5;r++){
		for(c=0;c<=r;c++){
			printf("%d",c%2);
		}
		printf("\n");
	}
}
