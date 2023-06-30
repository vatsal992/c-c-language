#include<stdio.h>

int fact(int a)
{
	if(a>=1){
		
		return a*fact(a-1);
	}
	else{
		return 1;
	}
}



int main(){
	
	int a;
	
	printf("Enter the value :");
	scanf("%d",&a);
	
	printf("factorial : %d",fact(a));
	
	return 0;
	
}
