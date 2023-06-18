#include<stdio.h>

void main(){
	
	
	int n,i;
	
	printf(" Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter the value of first array :",i);
		scanf("%d",&a[i]);
	}
	
	int b[n];
	
	
		for(i=0;i<n;i++){
		printf("Enter the value of second array :",i);
		scanf("%d",&b[i]);
		}
		
		int c[n];
		
		for(i=0;i<n;i++){
			
			c[i]=a[i]+b[i];
		}
		
		printf("sum of two arrays is : \n");
		
		for(i=0;i<n;i++){
			printf("%d",c[i]);
		}

		

	
	
}
