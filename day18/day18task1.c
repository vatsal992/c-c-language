#include<stdio.h>

void main(){
	int n,i;
	printf("Enter size of array :");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
{
	printf("Enter elements :");
	scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++){
	printf("%d \n",a[i]);
		
	}
}
