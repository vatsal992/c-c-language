#include<stdio.h>

int main()
{
	int i=1,n;
	
	printf("enter value :");
	scanf("%d\n",&n);
	while(i<=10){
		printf("%d x %d =%d\n",n,i,i*n);
		i++;
	}
}