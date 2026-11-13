#include<stdio.h>//user defination function

#include <stdio.h>
	//function declaretion
	float calculateTotal (float price, float quantity){
	float total_cost;
	total_cost= price * quantity;
	return total_cost;
	
	}	

int main(){
	float cost,total_cost;
	int qnty;
printf ("enter the prise");
	scanf("%f", &cost);
	
printf("enter the quantity purchased");
	scanf("%d", &qnty);

//funtion call
total_cost = calculateTotal(cost, qnty);

printf("The total cost is ksh.%.2f", total_cost);	
	
return 0;	
}
