// WAP to check whether the number is armastrong or not
#include <stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter the value you want to check whether it is armstrong or not\n");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r=n%10;
        sum = sum + r*r*r;
        n = n/10;
    }
    if(temp == sum){
        printf("%d is the Armstrong number",temp);
    }
    else{
        printf("%d is not the armstrong number",temp);
    }
}