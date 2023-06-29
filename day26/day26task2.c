#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int *c,*d;
	int r;
	
	c=&a;
	d=&b;
	
	r=*d;
	*d=*c;
	*c=r;
	
	printf("swapped value of a : %d\n b: %d\n",a,b);
	
	
	return 0;
}