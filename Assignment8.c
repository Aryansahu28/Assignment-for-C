// WAP to find the factorial of the number accepted by the user
#include <stdio.h>
int main(){
    int a = 1,n;
    printf("Enter the value of which factorial you want\n");
    scanf("%d",&n);
    if(n == 0){
        return 1;
    }
    else{

        for(int i = 1; i<=n;i++){
            a = a*i;
        }
    }
    printf("The foactorial of number %d is %d",n,a);
    
}