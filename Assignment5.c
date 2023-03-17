// WAP to swap the variable without using third variable
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    printf("The values of a and b are %d and %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The values are now swapped so the value of a and b are %d and %d",a,b);
}