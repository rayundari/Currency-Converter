#include <stdio.h>
#include <stdlib.h>
#include "conv.h"


#define size 6

	float update;
	int change1, change2;

        char ncurrency[size][30] = {{" "}, 
									{"American Dolar"}, 
									{"British Pound"}, 
									{"South Korea Won"}, 
									{"Indonesian Rupiah"}, 
									{"Europe Euro"}
									};
        float curr[size][6]={{0},
							 {1, 1, 0.76, 0.768, 15225.95, 0.87},
							 {1, 1.32, 1, 1489.30, 20026.70, 1.14},
							 {1, 0.00088, 0.00067, 1, 13.45, 0.00077},
							 {1, 0.000066, 0.000050, 0.074, 1, 0.000057}, 
							 {1, 1.15, 0.87, 1302.30, 17528.72, 0.0077} 
							 };



int main()
{
        /*Declare variable*/

	    
		float in, ou;       
        int  choice, conversion, pil1, pil2;
		
		FILE *out;    
		



	balik:
		
		printf("----------------------------------------\n\n");
        printf("        Currency Conversion Program\n");
        printf("----------------------------------------\n\n");
        printf("1)   American Dollar               \n");
        printf("2)   British Pound             \n");
        printf("3)   South Korea Won              \n");
        printf("4)   Indonesian Rupiah           \n");
        printf("5)   Europe Euro                     \n");
        printf("6)   Help          \n");
        printf("7)   Update Currency           \n");
        printf("8)   Exit the Program          \n");
    
	 printf("Enter your currency choice ----> ");
     scanf("%d", &choice);
        
        while((choice<1) || (choice>8))
        {
                printf("Invalid entry, please Enter 1-7: ");
                scanf("%i", &choice);
        } 
		
		
		switch (choice)
                {
                case 1:
                        printf("Your Currenccy choice is American Dollar \n\n");
                        break;
                case 2:
				        printf("Your Currenccy choice is British Pound \n\n");
                        break;
                case 3:
				        printf("Your Currenccy choice is South Korea Won \n\n");
                        break;
                case 4:
 				        printf("Your Currenccy choice is Indonesian Rupiah \n\n");
                        break;
                case 5:
				        printf("Your Currenccy choice is Euro Europe \n\n");
                        break;
                case 6:
							printf("\n\nHELP\n\n");
							printf("- Enter number of your currency choice.\n\n");
							printf("- Enter nuber of your currency conversion choice.\n\n");
							printf("- Enter amount money. look the  calculation. \n\n");
							printf("********************************************************************************\n\n\n");
							printf("\n Enter anything to go back to menu\n");
							system("pause");
							system("cls");
							goto balik; 
				case 7:			
							printf("----------------------------------------\n\n");
    					    printf("        Currency Conversion Program\n");
        					printf("----------------------------------------\n\n");
       						printf("1)   American Dollar               \n");
        					printf("2)   British Pound             \n");
    					    printf("3)   South Korea Won              \n");
        					printf("4)   Indonesian Rupiah           \n");
        					printf("5)   Europe Euro                     \n");
        					
        					printf("Select Your Currenccy choice 1-5 ---> ");
        					scanf("%d", &change1);
        					  while((change1<1) || (change1>5))
        					{
                			printf("Invalid entry, please Enter 1-5: ");
                			scanf("%i", &change1);
        					} 
							
							printf("Select Your Currenccy conversion 1-5 ---> ");
        					scanf("%d", &change2);
        					  while((change2<1) || (change2>5) || (change1==change2))
        					{
                			printf("Invalid entry, please Enter 1-5: ");
                			scanf("%i", &change2);
        					}
							 
        					
        					printf("enter your update currency \n");
        					scanf("%f", &update);        					       					
        					
        					curr[change1][change2] = update;
							printf("your currency is updated!!!! \n\n");
							printf("********************************************************************************\n\n\n");
							
							goto balik;
														
							break;
				case 8:
                        printf("Exiting the program....\n");
                        printf("Goodbye!\n");
                        exit(0);
                        break;			
				
                }   

	            
     	
		printf("Enter your conversion currency choice ----> ");        
     	scanf("%d", &conversion);
        
        while((conversion<1) || (conversion>5) || (conversion==choice))
        {
                printf("Invalid entry, please Enter 1-7: ");
                scanf("%i", &conversion);
        }

		while(1)
		{
                switch (conversion)
                {
                case 1:
                		printf("Your Currenccy Conversion choice is American Dollar \n");
                        printf("Please enter the amount:  ");
                        scanf("%f",&in);

                        /*Conversion Calculation 1*/
                        ou = conv(in, curr[choice][conversion]);
                        printf("\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
                        
						out = fopen( "fileKonversi.txt", "w");
						if(out != NULL)
						
						fprintf( out, "---------------------------------------------------------\n\n");
      					fprintf( out, "        Value Currency Conversion Program\n");
        				fprintf( out, "---------------------------------------------------------\n\n");
        				fprintf( out, "Your Currency choice is %s \n", ncurrency[choice]);
        				fprintf( out, "Your Currency Conversion choice is %s \n\n", ncurrency[conversion]);        				
						fprintf( out, "\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
											                       												
						printf("\n Enter anything to go back to menu\n");
						system("pause");
						system("cls");
                        break;
                case 2:
                        printf("Your Currenccy Conversion choice is British Pound \n");
						printf("Please enter the amount:  ");
                        scanf("%f",&in);

                        /*Conversion Calculation 1*/
                        ou = conv(in, curr[choice][conversion]);
                        printf("\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
                        
						out = fopen( "fileKonversi.txt", "w");
						if(out != NULL)
						
						fprintf( out, "---------------------------------------------------------\n\n");
      					fprintf( out, "        Value Currency Conversion Program\n");
        				fprintf( out, "---------------------------------------------------------\n\n");
        				fprintf( out, "Your Currency choice is %s \n", ncurrency[choice]);
        				fprintf( out, "Your Currency Conversion choice is %s \n\n", ncurrency[conversion]);        				
						fprintf( out, "\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
						
						printf("\n Enter anything to go back to menu\n");
						system("pause");
						system("cls");
						break;
                case 3:
                        printf("Your Currenccy Conversion choice is Korean Won \n");
						printf("Please enter the amount:  ");
                        scanf("%f",&in);

                        /*Conversion Calculation 1*/
                        ou = conv(in, curr[choice][conversion]);
                        printf("\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
                        
						out = fopen( "fileKonversi.txt", "w");
						if(out != NULL)
						
						fprintf( out, "---------------------------------------------------------\n\n");
      					fprintf( out, "        Value Currency Conversion Program\n");
        				fprintf( out, "---------------------------------------------------------\n\n");
        				fprintf( out, "Your Currency choice is %s \n", ncurrency[choice]);
        				fprintf( out, "Your Currency Conversion choice is %s \n\n", ncurrency[conversion]);        				
						fprintf( out, "\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
						
						printf("\n Enter anything to go back to menu\n");
						system("pause");
						system("cls");
						break;
                case 4:
                        printf("Your Currenccy Conversion choice is Indonesian Rupiah \n");
						printf("Please enter the amount:  ");
                        scanf("%f",&in);

                        /*Conversion Calculation 1*/
                        ou = conv(in, curr[choice][conversion]);
                        printf("\n%.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
                        
						out = fopen( "fileKonversi.txt", "w");
						if(out != NULL)
						
						fprintf( out, "---------------------------------------------------------\n\n");
      					fprintf( out, "        Value Currency Conversion Program\n");
        				fprintf( out, "---------------------------------------------------------\n\n");
        				fprintf( out, "Your Currency choice is %s \n", ncurrency[choice]);
        				fprintf( out, "Your Currency Conversion choice is %s \n\n", ncurrency[conversion]);        				
						fprintf( out, "\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
						
						printf("\n Enter anything to go back to menu\n");
						system("pause");
						system("cls");
						break;
                case 5:                        
						printf("Your Currenccy Conversion choice is Europe Euro \n");
						printf("Please enter the amount:  ");
                        scanf("%f",&in);

                        /*Conversion Calculation 1*/
                        ou = conv(in, curr[choice][conversion]);
                        printf("\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
                       
						out = fopen( "fileKonversi.txt", "w");
						if(out != NULL)
						
						fprintf( out, "---------------------------------------------------------\n\n");
      					fprintf( out, "        Value Currency Conversion Program\n");
        				fprintf( out, "---------------------------------------------------------\n\n");
        				fprintf( out, "Your Currency choice is %s \n", ncurrency[choice]);
        				fprintf( out, "Your Currency Conversion choice is %s \n\n", ncurrency[conversion]);        				
						fprintf( out, "\n %.3f %s = %.3f  %s \n", in, ncurrency[choice], ou, ncurrency[conversion] );
					   
					    printf("\n Enter anything to go back to menu\n");
						system("pause");
						system("cls");
						break;
                }  
				goto balik; 
			}

        return 0;
}


			
