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
	
	ans =  (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
    printf("%d",ans);
	return 0;
		
}