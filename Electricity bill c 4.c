#include<stdio.h>
// function prototype 
float calculateBill(int unit);


int main(){
   int unit;
   float bill;
   
   printf("enter number of unit consumed:");
   scanf("%d",&unit);
   // function call
   bill= calculateBill(unit);
   
   printf("\nunits consumed:%d\n",unit);
   printf("Electricity bill:%.2f\n",bill);
    
    return 0;
}
// function definition
float calculateBill(int unit){
   float bill=0.0;
  if(unit <=100){
   bill= unit*10;
   }
  else if(unit<=200){
    bill =(100*10)+ ((unit-100)*15);
    }
  else{
    bill=(100*10)+(100*15)+ ((unit-200)*20);
    }
    return bill;
    }