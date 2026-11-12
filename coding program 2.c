//variable and data types

#include<stdio.h>

int main(){
//declare and initialize variables
char grade='A';//%c;
char name[14]={"hesend munene"} ;//%s;
int age=19; //%d;
float marks=70;//%f;
double pi=3.142;//%lf;

    printf("the grade is%c\n",grade);
    printf("my name is%s\n",name);
    printf("I scored %.2fmarks in kcsen",marks);
    printf("The value of pi is %.3fn",pi);
    
    return 0;
}