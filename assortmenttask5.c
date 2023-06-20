#include<stdio.h>

int main(){


int n,m,i,j;

printf("enter value of rows");
scanf("%d",&n);

printf("enter value of cols");
scanf("%d",&m);

int a[n][m];

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("enter value");
		scanf("%d",&a[i][j]);
		
	}
	printf("\n");
}
int b[m][n];

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		b[j][i]=a[i][j];
	
	}
		
	}
	printf("transpose of matrix");
	printf("\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("%d",b[i][j]);
	
	}
		printf("\n");
	}
	return 0;
	
	}