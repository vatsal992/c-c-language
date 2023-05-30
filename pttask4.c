#include<stdio.h>
int main(){
	
	int a=100;
	int b=20;
	
	a=a+b;//a=120
	b=a-b;//b=100
	a=a-b;
	printf("value of A:%d\n",a);
	printf("value of B;%d",b);
	return 0;
}