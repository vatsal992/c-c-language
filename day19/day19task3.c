#include<stdio.h>

void main(){
	
	int i,j,m,n;
	int a[10][10],sum=0,average;
	
	printf("Enter row size : \n");
	scanf("%d",&m);
	printf("Enter col size : \n");
	scanf("%d",&n);
	printf("Enter matrix element : \n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum =sum + 
			
			a[i][j];
		}
	}
	average =sum/(m*n);
	printf("sum =%d \n",sum);
	printf("average = %d",average);
}
