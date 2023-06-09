#include<stdio.h>

void main()

{
	
	int a,i=1;
	printf("enter the value :");
	scanf("%d",&a);
	
   while(i<=10)
   {
   	printf("%d X %d = %d \n",a,i,a*i);
   	i++;
   	
   }
}