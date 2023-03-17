// WAP to find the largest out of three numbers taken input by the user
#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the three numbers \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3)){
        printf("%d is the largest number out of three\n",n1);
    }
    else if((n2>n1)&&(n2>n3)){
        printf("%d is the largest number out of three\n",n2);
    }
    else if((n3>n2)&&(n3>n1)){
        printf("%d is the largest number out of three\n",n3);
    }
    else {
        printf("Invalid Input");
    }
}