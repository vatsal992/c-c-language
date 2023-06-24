#include<stdio.h>
#include<string.h>

void main(){
	char pass[];
	int is valid=0;
	printf("enter password :");
	scanf("%s",pass);
	
	int i,len;
	len = strlen(pass);
	if(len>=6){
		int alp =0,digit =0;
		for(i=0;i<len;i++)(
		if(pass[i]>=0 && pass[i]<=9)
		digit = 1;
		
		else if(pass[i]>'a' && pass[i]<'z')
		alp =1;
	}
	if(digit || alp){
		is valid = 1;
		printf("valid password\n");
	}
	else{
		printf("invalid password password must contain one alphabet and one digit");
		
	   }
	}
	else{
		printf("invalid password password must br at least 6 char long");
	}
	return 0;	
}

