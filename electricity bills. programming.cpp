//user define function

#include <stdio.h>

//float calculateBill(float price, float units);
//function declaretion
float calculateBill(float cost, float units){
float total_bills;
total_bills = cost * units;
return total_bills;
}

int main(){
	
	float units, cost, total_bills;
printf("Enter the number of units consumed");
scanf("%f", &units);

printf("Enter cost per unit");
scanf("%f",&cost);

//function call	
	total_bills = calculateBill (units, cost);
	
	printf("Total electricity bill in ksh. %f", total_bills);
	
	return 0;
}