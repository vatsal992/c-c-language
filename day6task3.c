#include<stdio.h>

int main()
{
	int x;
	int y;
	int ans;
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	
	ans =  (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
    printf("%d",ans);
	return 0;
		
}