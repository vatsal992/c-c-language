#include<stdio.h>

int main()
{
	int a,b,c,sum=0;
	c=a%10;
	printf("enter value :");
	scanf("%d",&a);
	while(a>9){
		a=a/10;
	}
	b=a;

	
	sum = b + c;
	printf("sum of b and c %d",sum);
	return 0;
	
}