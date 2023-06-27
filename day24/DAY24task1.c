#include<stdio.h>

void sum(int a,int b){
	printf("%d",a+b);
}

void min(int a,int b){
	printf("%d",a-b);
}

void mul(int a,int b){
	printf("%d",a*b);
}

void div(int a,int b){
	printf("%d",a/b);
}

void main(){
	while(1){
	
	int a,b;
	char operation;
	
printf("enter value of a :\n");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	
	printf("+,-,*,/");
	
	printf("enter the above choice of operation");
	scanf(" %c",&operation);
	
	switch(operation){
		case '+':
			sum(a,b);
			break;
			
			case '-':
			min(a,b);
			break;
			
			case '*':
			mul(a,b);
			break;
			
			case '/':
			div(a,b);
			break;
		}
	}
}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	

