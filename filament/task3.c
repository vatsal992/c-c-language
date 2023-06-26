#include<stdio.h>
#include<string.h>
void main(){
	
	char a[1000];
	
	printf("Enter the value:");
	scanf("%s",&a);
 
     int i;
     
	       
	       	
   	 if(a[0]>='a'&& a[0]<='z'){
     		a[0]-=32;
		 }
     	
     for(i=1;i<strlen(a);i++){
     	
     	if(a[i]>='A'&&a[i]<='Z'){
     		a[i]+=32;
		 }

	 }
     printf("%s",a);

}