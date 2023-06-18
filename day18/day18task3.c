#include<stdio.h>

void main(){
	
	int n,i,sum=0;
	int average;
	printf("Enter the value of the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
    for(i=0;i<n;i++){
    	printf("enter the Num %d:",i);
    	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("sum of value entered : %d \n",sum);
	average =sum/n;
	
	printf("The average of value entered : %d",average);
}
