#include<stdio.h>






void divisible(int a){
	
	
	printf("enter tne number");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
	printf("number is divisible by 3 and 5");
	
}
else{
	printf("number is not divisible by 3 and 5");
}
}








int main(){
	
	divisible(22);

	
	
	return 0;

}