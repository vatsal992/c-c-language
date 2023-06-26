#include<stdio.h>
#include<string.h>
void main(){
	
	char a[1000];
	
	printf("Enter the value:");
	scanf("%s",&a);
 
     int i,j;
     j=strlen(a);  
	       
     for(i=0;i<j;i++){
     	
     	if(a[i]>='A'&&a[i]<='Z'){
     		a[i]+=32;
		 }
     	
     	else if(a[i]>='a'&& a[i]<='z'){
     		a[i]-=32;
		 }
     	
     	
	 }
     printf("%s",a);

}