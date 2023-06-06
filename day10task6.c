#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("HI I AM SPEAKING FROM  FLIGHT SERVICES \n");
	printf("To book flight press 1 on keypad: \n");
	scanf("%d",&a);
	
	switch(a){
		 case 1:
		 	printf("choose your flight company \n");
		 	printf("press 1 for air india \n");
		 	printf("press 2 for spicejet \n");
		 	printf("press 3 for emirates \n");
		 	printf("press 4 for air asia \n");
		 	printf("enter your choice :\n");
		 	scanf("%d",&a);
		 	switch(a){
		 		
		 		case 1:
		 			printf("\n you selected air india flight for travelling \n");
		 			printf("\n Avalible fligts are \n");
		 			printf("\n 1) From india to sweden in Rs 60,000/- \n");
		 			printf("\n 2) From india to russia  in Rs 60,000/- \n");
		 			printf("\n 3) From india to europe in Rs 60,000/- \n ");
		 			printf("\n Enter your choice :\n");
					scanf("%d",&b);	
					switch(b){
						case 1:
							printf("\n your flight has been confrimed from india to sweden \n");
							printf("\n thanks for travelling with us \n");
							break;
						case 2:
							printf("\n your flight has been confrimed from india to russia \n ");
							printf("\n thanks for travelling with us \n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to europe\n");
							printf("\nthanks for travelling with us\n");
							break;
								default:
		 		printf("invalid input !!!");
		
							
						
					}	 		
		 			
		 		case 2:
				  
                    printf("\nyou selected spicejet flight for travelling\n");
		 			
		 			printf("\nAvalible fligts are\n");
		 			printf("1) \nFrom india to  sweden in Rs 60,000/- \n");
		 			printf("2) \nFrom india to  russia  in Rs 40,000/-\n");
		 			printf("3) \nFrom india to europe in Rs 20,000/-\n");	
                    printf("\nEnter your choice :\n");
					scanf("%d",&c);	
					
					switch(c){
							case 1:
							printf("\nyour flight has been confrimed from india to sweden \n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to russia \n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to europe\n");
							printf("\nthanks for travelling with us\n");
							break;
							
					default:
		 		printf("invalid input !!!");
		
						
					}	 			
		 	    case 3:
				 
				   printf("\nyou selected emirates flight for travelling\n");
		 		
		 			printf("\nAvalible fligts are\n");
		 			printf("\n1) From india to sweden in Rs 10,000/-\n");
		 			printf("\n2) From india to russia in Rs 30,000/-\n");
		 			printf("\n3) From india to  europe in Rs 50,000/-\n");
					 printf("\nEnter your choice :\n");
					scanf("%d",&d);	
					switch(d)
					{
                           	case 1:
							printf("\nyour flight has been confrimed from india to sweden\n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to russia\n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to europe\n");
							printf("\nthanks for travelling with us\n");
							break;
				default:
		 		printf("invalid input !!!");
							
						
					}	 			
				
				case 4:
				
				printf("\nyou selected air aisa flight for travelling\n");
		 	
		 			printf("\nAvalible fligts are\n");
		 			printf("\n1) From india to sweden in Rs 20,000/-\n");
		 			printf("\n2) From india to russia in Rs 40,000/-\n");
		 			printf("\n3) From india to europe in Rs 60,000/-\n");
					printf("\nEnter your choice :\n");
					scanf("%d",&e);	
					switch(e)
					{
							case 1:
							printf("\nyour flight has been confrimed from india to sweden\n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to russia \n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to europe\n");
							printf("\nthanks for travelling with us\n");
							break;
				default:
		 		printf("invalid input !!!");
		
				   }	 				 		
		 	
		 	break;
		 	
		 	
		 	default:
		 		printf("invalid input !!!");
		
		
	}
	
	
	
}	
}