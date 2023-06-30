#include<stdio.h>

sum(int arr[],int n){
	
	int sum=0;
	
	for(int i=0; i<n;i++){
    sum=sum + arr[i];
	}
	printf("%d",sum);
}

int main(){
	
	int n,i;
	
	printf("enter the size if array :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		
		printf("Enter the value of array :");
		scanf("%d",&arr[i]);
		
	
	}
	
	sum(arr,n);
	return 0;
	
}
