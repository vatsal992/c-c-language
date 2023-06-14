#include <stdio.h>

void main()
{
	int r,c;
	
	for(c=1;c<=5;c++){
		for(r=1;r<=c;r++){
			printf("%d",c);
		}
		printf("\n");
	}
}
