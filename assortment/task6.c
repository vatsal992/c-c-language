#include<stdio.h>

void main(){
	
	int n,m,i,j,sum=0;

	printf("Enter the size of rows :");
	scanf("%d",&n);
	
	printf("Enter the size of col :");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the elements of matrix :");
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
			
		}
		printf("\n");
		
	}
	
		for(i=0;i<n;i++){		
	for(j=0;j<m;j++){
			if(i==j){
			sum=sum+a[i][i];
		}	
		}
	}
	printf("sum of the diagonal elements: %d \n",sum);

}
