#include<stdio.h>

int main()
{
	int bs,hra,da,ta,gs;
	
	printf("enter base salary :",bs);
	scanf("%d",bs);
	
	hra=(10.00/100)*bs;
	da=(5.00/100)*bs;
	ta=(8.00/100)*bs;
	
	gs=bs+hra+da+ta;
	printf("your gross salary is %d",gs);
	return 0;
}