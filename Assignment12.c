// WAP to check whether number is even or odd
#include <stdio.h>
int main(){
    int num;
    printf("Enter the value you have to check whether it is even or odd\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even number",num);
        
    }
    else if (num%2!=0){
        printf("%d is the odd number",num);
    }
    else{
        printf("Invalid Input");
    }
}