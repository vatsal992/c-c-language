#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter value of a");
	scanf("%d",&a);
	
	printf("enter value of b");
	scanf("%d",&b);
	
	printf("enter value of c");
	scanf("%d",&c);
	
	a>b ? a>c ? printf("%d is max",a):printf("%d is max",c): b>c ? printf("%d is max",b):printf("%d is max",c);
	return 0;
}