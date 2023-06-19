#include<stdio.h>

void main(){
	
	int m,n;
	
	printf("enter the size of rows :");
	scanf("%d",&m);
	
	printf("enter the size of col :");
	scanf("%d",&n);
	

	int a[m][n];
	int i,j;
	

   for(i=0;i<m;i++){
   	for(j=0;j<n;j++){
   		printf("Enter value:",i,j);
   		scanf("%d",&a[i][j]);
	   }
   }
   for(i=0;i<m;i++){
   	for(j=0;j<n;j++){
   		printf("%d",a[i][j]);
	   }
	   printf("\n");
   }
}