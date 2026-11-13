#include<stdio.h>// user defination function

#include <stdio.h>
// function declaretion
float calculateTax(float Energychange ){
float tax;
tax= Energychange * 0.1;

return tax;
}
// function decleration
float calculateTotalbill(float Energychange, float tax){
float Total_bill;
Total_bill= Energychange + tax; 

return Total_bill;
}
  
//function
float calculateEnergyChange(float unit){
	float Energychange;
if (unit <=50){
	Energychange = unit * 10;
}
else if (unit<=150){
	Energychange= unit * 50 + (unit - 50)* 15;
}
else if (unit>150){
	Energychange= unit * 50 + (unit - 50)* 15 +(unit - 150)* 20;
}
	return Energychange;
}



int main (){
	float unit, Energychange,tax, Total_bill;
	printf("enter unit consumed");
	scanf("%f", &unit);
	
	//function call
	
	Energychange = calculateEnergyChange(unit);
	tax = calculateTax( Energychange );
	Total_bill = calculateTotalbill(Energychange, tax);
	
	printf("units consumed %f \n", unit);
	printf("Energy change %f \n", Energychange);
	printf("tax in ksh. %f \n", tax);
	printf("Total bill in ksh. %f\n", Total_bill);
	
	return 0;
}
