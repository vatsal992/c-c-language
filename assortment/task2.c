#include<stdio.h>

void main(){
	
	int n,i=0,temp=0,largest=0,second=0;
	printf("Enter the size of matrix :");
	scanf("%d",&n);
	
   int	a[n];
   
   for(i=0;i<n;i++){
   	printf("Enter the value of matrix :");
   	scanf("%d",&a[i]);
   }
   
    for(i=0;i<n;i++){
   	printf("%d \n",a[i]);

   }
  
  largest =a[0];
  second = a[1];
  
  if(largest<second){
  	temp =largest;
  	largest =second;
  	second =temp;
  	
  }
  
  for(i=2;i<n;i++){
  	if(a[i]>largest){
  	second=largest;
  	largest=a[i];
  	
	  }
	  else if(a[i]>second && a[i] != largest){
	  	second =a[i];
	  	
	  }
  }
  
  printf("largest = %d \nsecond largest = %d \n",largest,second);
 
}
	