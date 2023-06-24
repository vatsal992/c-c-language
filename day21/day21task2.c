#include<stdio.h>
#include<string.h>

void main(){
	char a[]="vatsal007@gmail.com"
	char b[]="1234567890";
	char c[];
	char d[];
	
	printf("enter your email");
	scanf("%s",&c);
	printf("enter your password");
	scanf("%s",&d);
	int z =strcmp(a,c);
	int y =strcmp(b,d);
	if(z==0 && y==0)
	{
		printf("your login is succesfully done");
	}
	else{
		printf("invalid! please try again");
	}
}