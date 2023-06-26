#include<stdio.h>
#include<string.h>
void main(){
	
	char a[100],b[100];
	
	printf("Enter the value:");
	gets(a);
	
	strcpy(b,a);
	strlwr(b);
	
	printf("%s",b);
}
