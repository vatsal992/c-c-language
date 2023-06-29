#include<stdio.h>

int main(){
	
	int a;
    int *b;
    printf("enter value :");
    scanf("%d",&a);
    
    b=&a;
    
    printf("%u =>%d\n",b,(*b)*(*b));
    return 0;
    
}