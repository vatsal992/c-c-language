#include <stdio.h>

int main(){
	int a,sum=0,i=0;
	
	 printf("enter value :");
	 scanf("%d",&a);
	 
	 while(i<=a){
	 	sum = sum + i;
	 	i++;
	 	
	 }
	printf("%d",sum);
	return 0;
}