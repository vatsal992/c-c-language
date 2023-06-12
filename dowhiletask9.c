#include<stdio.h>

int main()

{
	
int n,i=1,b=1;
printf("enter value :");
scanf("%d",&n);

do{
	
     b = b*i;
     i++;	

}while(i<=n);
printf("factorial of %d is :%d",n,b);
return 0;
}
