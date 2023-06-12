#include<stdio.h>

int main()

{
	
	int a,i=1;
	printf("enter the value :");
	scanf("%d",&a);
	
   do
   {
   	printf("%d X %d = %d \n",a,i,a*i);
   	i++;
   	
   }while(i<=10);
   return 0;
}