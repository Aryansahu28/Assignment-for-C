// WAP to print the Fibonacci series
#include <stdio.h>
int main(){
    int n1=0,n2=1,n3,length;
    printf("Enter the length of the fibonacci series\n");
    scanf("%d",&length);
    if(length == 0){
        printf("0");
    }
    else{    
        printf("0 ");
        printf(" 1 ");
        for(int i =2;i<length;i++){
            n3 = n1 + n2;
            printf("%d ",n3);
            n1 = n2;
            n2 = n3;
        }
        }
    
}