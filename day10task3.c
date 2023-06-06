#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("enter value of a");
	scanf("%d",&a);
	
	printf("enter value of b");
	scanf("%d",&b);
	
	printf("enter value of c");
	scanf("%d",&c);
	
	
	printf("enter value of d");
	scanf("%d",&d);
	
	a>b ? b>c ? a>d? printf("a is max"):printf("d is max"):c>d ? printf("c is max"):printf("d is max"):b>c ? c>d ?  printf("c is max"):printf("d is max"):b>d ?printf("b is max"):printf("d is max");
	return 0;
}