#include<stdio.h>

void main(){
	
	char a,b;
	
	printf("Enter the character in lower case :");
	scanf("%c",&a);
	if(a>=97 && a<=122){
		b=a-32;
		printf("chararter in  upper case : %c",b);
	}
	
}
