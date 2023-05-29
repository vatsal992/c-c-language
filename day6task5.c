#include<stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int ans;
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	printf("enter value of z:");
	scanf("%d",&z);
	ans =  (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
    printf("%d",ans);
	return 0;
		
}