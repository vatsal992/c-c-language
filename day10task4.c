#include<stdio.h>

int main()
{


	int a,b,c,d,e;
	
	printf("enter value of a");
	scanf("%d",&a);
	
	printf("enter value of b");
	scanf("%d",&b);
	
	printf("enter value of c");
	scanf("%d",&c);
	
	
	printf("enter value of d");
	scanf("%d",&d);
	
	printf("enter value of e");
	scanf("%d",&e);
	
	a>b ? a>c ?  a>d ? a>e ? printf("a is max"):printf("e is max"):d>e ? printf("d is max"):printf("e is max"):c>d ? c>e ? printf("c is max"):printf("e is max"):b>c ?c>d ?d>e ? printf("d is max"):printf("e is max"): c>e ? printf("c is max"):printf("e is max"):b>d ? d>e ? printf("d is max"):printf("e is max"):b>e?printf("b is max"):printf ("e is max");
	return 0; 
}