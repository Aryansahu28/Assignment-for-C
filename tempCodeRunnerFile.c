// WAP to check the whether it is prime or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number you want to check whether prime or not\n");
    scanf("%d",&n);
    if((n==0)||(n==1)){
        printf("%d is not prime number ",n);
    }
    else{
        for(int i=2;i<=n;i++){
            if((n%i==0)&&(n==i)){
                printf("%d is the prime number",n);
                break;
            }
            else if((n%i==0)&&(n!=i)){
                printf("%d is not prime number",n);
                break;
            }
    
        
    }}
    
}