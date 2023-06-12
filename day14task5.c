#include <stdio.h>

int main(){
	
	int num,reverse=0,rem,orignalnum ;
	
	printf("enter the value :");
	scanf("%d",&num);
	
	orignalnum = num;
	
	for(;num!=0;num/=10){
	
	
	rem = num %10;
	reverse = reverse *10 + rem;      
}
if(orignalnum==reverse)
{
	printf("%d is palindrom number .",orignalnum);
	}	
else	{
		printf("%d is not palindrom number .",orignalnum);

}
	return 0;
}
