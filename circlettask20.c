#include<stdio.h>

void main(){
	
	int r,c;
	int a=4,b=4;
	for(r=1;r<=4;r++){
		for(c=1;c<=7;c++){
			if(c==a||c==b){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		a--;
		b++;
	}
}
