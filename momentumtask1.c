#include<stdio.h>

int main()
{
	char c;
	printf("please enter a character : ");
	scanf("%c",&c);
	
	if(c >='a'&&c <='z'){
		printf("entered value is alphabet\n",c);
	}
	else if(c >='0'&&c <='9'){
		printf("entered value is a digit\n",c);
		
	}
	else{
		printf("entered value is special character");
	}
	return 0;
}