#include <stdio.h>

int main(){
	int a,sum=0,i=0;
	
	 printf("enter value :");
	 scanf("%d",&a);
	 
	do {
	 	sum = sum + i;
	 	i++;
	 }while(i<=a);
printf("%d \n",sum);
return 0;
}
