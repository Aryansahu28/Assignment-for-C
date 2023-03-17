// WAP of a calculator using a switch case
#include <stdio.h>
int main(){
    int operator;
    int x,y;
    printf("Enter the value of x and y \n");
    scanf("%d%d",&x,&y);
    printf("Enter the operation you would like to operate\n");
    printf("Enter 1 for addition , Enter 2 for substraction, enter 3 for multiplication and 4 for division\n");
    scanf("%d",&operator);
    switch(operator){
        case 1:
            printf("The additon of %d and %d are %d",x,y,x+y);
            break;
        case 2:
            printf("The additon of %d and %d are %d",x,y,x-y);
            break;
        case 3:
            printf("The additon of %d and %d are %d",x,y,x*y);
            break;
        case 4:
            printf("The additon of %d and %d are %f",x,y,x/y);
            break;
        // default:
        //     printf("I think you done a mistake");
    }
}