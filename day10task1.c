#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter value of a");
	scanf("%d",&a);
	
	printf("enter value of b");
	scanf("%d",&b);
	
	a>b ? printf("%d is max",a) : printf("%d is max",b);
	return 0;
	
	
}