#include <stdio.h>

void main(){
	
	
	int n,m,i,j;
	
	printf("Enter the size of rows :");
	scanf("%d",&n);
	
	printf("Enter the size of col :");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the elements of matrix :");
			scanf("%d",&a[i][j]);
		}
	}
	
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		
		if(a[i][j]<0){
			printf("%d \n",a[i][j]);
		}
	}
	}
	

	
}
