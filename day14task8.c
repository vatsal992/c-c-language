#include<stdio.h>
int main()

{
	int n,i,a=0;
	printf(" Enter value :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(n%i==0){
			a++;
		}
	}
	if(a==2){
		printf(" %d is prime num ",n);
	}
	else{
			printf(" %d is not prime num ",n);
	}
	return 0;
}
