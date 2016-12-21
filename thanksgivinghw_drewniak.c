#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 int main(void) {
  
      srand(getpid());
  
  
  char ingredient = '1';
  int amount = 0;
  float Turkey_cost = 23.09;
  float Cranberry_Sauce_Cost = 1.50;
  float Stuffing_cost = 3.12;
  float Squash_cost = 1.75;
  float Gravy_cost = 2.50;
  float Mashed_Potatoes_cost = 3.02;
  float Sweet_Potatoes_cost = 2.00;
  float Apple_Pie_cost = 8.49;
  
  
  
  int Turkey = 0;
  int Cranberry_Sauce = 0;
  int Stuffing = 0;
  int Squash = 0;
  int Gravy = 0;
  int Mashed_Potatoes = 0;
  int Sweet_Potatoes = 0;
  int Apple_Pie = 0;
  
  
    
    
    
    
    
    
    while (ingredient != 'z') {
         printf("Enter an ingredient");
         scanf(" %c", &ingredient);
         
         
       
         printf("How many items would you like");
         scanf(" %d", &amount);
    



        if(ingredient == 't') {
        Turkey = Turkey + amount;
        }
    
        else if(ingredient == 'c') {
        Cranberry_Sauce = Cranberry_Sauce + amount;
        }
    
        else if(ingredient == 's') {
        Stuffing = Stuffing + amount;
        }
    
        else if(ingredient == 'q') {
        Squash = Squash + amount;
        }
    
        else if(ingredient == 'g') {
        Gravy = Gravy + amount;
        }
    
        else if(ingredient == 'm') {
        Mashed_Potatoes = Mashed_Potatoes + amount;
        }
    
        else if(ingredient == 'p') {
        Sweet_Potatoes = Sweet_Potatoes + amount;
        }
    
        else if(ingredient == 'a') {
        Apple_Pie = Apple_Pie + amount;
        }
    
        else {
        printf("Must enter a proper ingredient");
        }
    
     
    }
    
    /*Add up total cost of dinner*/
    
  float Turkey_Total = Turkey_cost * Turkey;
  float Cranberry_Sauce_Total = Cranberry_Sauce_Cost * Cranberry_Sauce;
  float Stuffing_Total = Stuffing_cost * Stuffing;
  float Squash_Total = Squash_cost * Squash;
  float Gravy_Total = Gravy_cost * Gravy;
  float Mashed_Potatoes_Total = Mashed_Potatoes_cost * Mashed_Potatoes;
  float Sweet_Potatoes_Total = Sweet_Potatoes_cost * Sweet_Potatoes;
  float Apple_Pie_Total = Apple_Pie_cost * Apple_Pie;
  float Total_Cost = Turkey_Total + Cranberry_Sauce_Total + Stuffing_Total + Squash_Total + Gravy_Total + Mashed_Potatoes_Total + Sweet_Potatoes_Total + Apple_Pie_Total;
    
    printf("\nSummary: \n%d Turkeys\n%d Cranberry Sauce\n%d Stuffing\n%d Squash\n%d Gravy\n%d Mashed Potatoes\n%d Sweet Potatoes\n%d Apple Pie \n\nTotal Cost: $%f", Turkey, Cranberry_Sauce, Stuffing, Squash, Gravy, Mashed_Potatoes, Sweet_Potatoes, Apple_Pie, Total_Cost);
    
    
    
    int flag = 0;
    
     int rand_num1 = rand();
	 rand_num1 = rand_num1 % 21 ;
    if(rand_num1 == 4) {
        printf("\nThanksgiving is cancelled due to the turkey being burned.");
        flag = flag + 1;
 }
	int rand_num2 = rand();
	rand_num2 = rand_num2 % 51;
    if(rand_num2 == 25) {
	    printf("\nThanksgiving is cancelled due to the obnoxious little cousin breaking all the plates.");
        flag = flag + 1;
}
	int rand_num3 = rand();
	rand_num3 = rand_num3 % 401;
    if(rand_num3 == 281) {
	    printf("\nThanksgiving is cancelled due to the apple pie catching fire.");
        flag = flag + 1;
        
    }
			
	if(flag == 0) {
	printf("\nThanksgiving occurred without any problems.");
    
		}
       
  return 0;
     
 }
