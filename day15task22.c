#include<stdio.h>

void main(){
	
	char r,c,k='A';
	
	for(r='A';r<='E';r++){
		for(c='A';c<=r;c++){
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}
