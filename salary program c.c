#include<stdio.h>//user defination function

#include <stdio.h>
//declaretion function
float calculatesubtotal(float p1,float p2,float p3,float p4,float p5){
	float subtotal;
	subtotal = p1 + p1 + p1 + p1 + p1;
	return subtotal;
}

//decleration final amount
float finalamount (float subtotal, float discount){
	float finalamount;
	finalamount = subtotal - discount;
	
	return finalamount;
}

// function

float calculatediscount(float subtotal, float discount){

if(subtotal >=10000){
	discount = subtotal * 0.1;
}

else if(subtotal >=5000 &&subtotal <=9999){
	discount = subtotal * 0.05;
}

else{
	discount=0;
}

return discount;
}

int main(){
	float p1, p2, p3, p4, p5;
	float subtotal, discount, final_amount_payable;
printf("enter prodact I \t");
scanf("%f", &p1);

printf("enter prodact II \t");
scanf("%f", &p2);

printf("enter prodact III \t");
scanf("%f", &p3);	
	
printf("enter prodact IV \t");
scanf("%f", &p4);

printf("enter prodact V \t");
scanf("%f", &p5);

	
// call function
subtotal=calculatesubtotal(p1, p2, p3, p4, p5);
discount=calculatediscount(subtotal, discount);
final_amount_payable=finalamount(subtotal, discount);

printf("subtotal in ksh. %f \n", subtotal);
printf("discount in ksh. %f \n", discount);
printf("final_amount_payable in ksh. %f \n", finalamount);
	return 0;
}
