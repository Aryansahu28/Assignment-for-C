//Write a program to input two numbers and compute all the arithematic operations

#include <stdio.h>

void sum(int a,int b){
    printf("The sum of two numbers are %d\n",a+b);
}

void sub(int a,int b){
    printf("The substraction of two numbers are %d\n",a-b);
}

void multiplication(int a,int b){
    printf("The Multiplication of two numbers are %d\n",a*b);
}

void division(int a,int b){
     printf("The division of the two numbers are %d\n",a/b);
    
}

void remain(int a,int b){
    printf("The remainder of two numbers are %d\n",a%b);
}

int main(){
int x,y;
printf("Enter the first value\n");
scanf("%d",&x);
printf("Enter the second value\n");
scanf("%d",&y);

sub(x,y);
sum(x,y);
division(x,y);
multiplication(x,y);
remain(x,y);
}