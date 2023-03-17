// WAP to check whether the number is Palindrome or not
#include <stdio.h>
int main(){
    int n,r,pal=0,temp;
    printf("Enter the value you want to check whether it is Palindrome or not\n");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r=n%10;
        pal = pal*10 + r;
        n = n/10;
    }
    if(temp == pal){
        printf("%d is the Palindrome number",temp);
    }
    else{
        printf("%d is not the Palindrome number",temp);
    }
}