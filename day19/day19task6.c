#include<stdio.h>

void main(){
	
	int n,m,i,j;
	
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
	
	int sum;
		for(i=0;i<n;i++){
			sum=0;
		for(j=0;j<m;j++){
			
			sum=sum+a[j][i];
			
			
		}
		printf("sum of the elements colwise: %d \n",sum);
	}

	
	
	

	
}
