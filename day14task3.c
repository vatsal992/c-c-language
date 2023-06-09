#include<stdio.h>

int main()
{
	int count=0,i;
	printf("enter value :");
	scanf("%d",&i);
	while(i!=0){
		i=i/10;
		
		count++;
		
		
	}
	printf("%d",count);
	return 0;
	
}