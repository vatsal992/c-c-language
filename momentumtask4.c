#include<stdio.h>

int main()
{
	char a;
	printf("enter any week day ");
	scanf("%c",&a);
	
	switch(a){
		case 'M':
		printf("monday");
		break;
		
		case 'T':
		printf("tueday");
		break;
		
		case 'W' :
		printf("wednesday");
		break;
		
		case 'Z':
		printf("thursday");
		break;
		
		case 'F':
		printf("friday");
		break;
		
		case 'J':
		printf("saturday");
		break;
		
		case 'S':
		printf("sunday");
		break;
		
		default:
			printf("invalid request plz try again!");
}
	return 0;
}