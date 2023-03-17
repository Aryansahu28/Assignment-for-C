// WAP for multiplication table
#include <stdio.h>
int main(){
    int a;
    printf("Enter the value whose multiplication table you want to print\n");
    scanf("%d",&a);
    for(int i= 1; i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}