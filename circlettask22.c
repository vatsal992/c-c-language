#include<stdio.h>

void main(){
	
	char r,c;
	
	for(r='A';r<='E';r++){
		for(c=r;c>='A';c--){
			printf("%c",r);
		}
		printf("\n");
	}
}
