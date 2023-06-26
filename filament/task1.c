#include<stdio.h>
#include<string.h>
void main(){
	
	char a[1000],b[1000];
	
	printf("Enter the value:");
	scanf("%s",&a);

     strcpy(b,a);
     strrev(a);
     
	if(strcmp(a,b)==0){
		printf("it is palindrom");
	}
	else{
		printf("it is not palindrom");
	}
}