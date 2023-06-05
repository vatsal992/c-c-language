#include<stdio.h>
void main()
{
	while(1)
	{
	
	
	int a,b,c,d,e;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
    printf("\n enter c:");
	scanf("%d",&c);
	printf("\n enter d:");
	scanf("%d",&d);
	printf("\n enter e:");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
		   if(a<d)
		   
		   {
		   	    if(a<e)
		   	    {
		   	    	printf("a is min");
				   }
				else{
					printf("e is min");
				}
			     
		   }
		   else
		   {
		   	    if(d<e){
				   
		   	    printf("d is min");}
		   	    else{
		   	    	printf("e is min");
				   }
		   	
		   	    
		   }
	
		
		}
		else
		{
			if(c<d)
			{
			    if(c<e)
			    {
			    	printf("c  is  min");
				}
				else{
					printf("e is min");
				}
			}
			
		}
	}
	else{
		if(b<c)
		{ 
		    if(b<d)
		    {
		    	if(b<e){
		    		printf("b is min");
				}
				else{
					printf("e is min");
				}
			}
			else
			{
				if(d<e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
			
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is min");
				}
				else{
					printf("e is min");
				}
				
			}
			else{
				if(d<e)
				{
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
	}
}
}