#include<stdio.h>

void main(){
	
	char a,b;
	
	printf("Enter the character in upper case :");
	scanf("%c",&a);
	if(a>=65 && a<=90){
		b=a+32;
		printf("chararter in  lower case : %c",b);
	}
	
}
