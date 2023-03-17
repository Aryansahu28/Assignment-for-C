// WAP to check whether the number is Palindrome or not
#include <stdio.h>
int main(){
    int n,r,rev=0,temp;
    printf("Enter the value you want to reverse\n");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r=n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    
        printf("%d is the reverse of the number",rev);
    
    
}