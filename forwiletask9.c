#include<stdio.h>

int main()

{
	
int n,i,b=1;
printf("enter value :");
scanf("%d",&n);

for(i=1;i<=n;i++){
	
     b = b*i;
     	

}
printf("factorial of %d is :%d",n,b);
return 0;
}
