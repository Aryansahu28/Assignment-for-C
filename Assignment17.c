// WAP to insert the elements in array and print the array
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n",n);
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d value of array\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("Your array is {");
    for(int j=0;j<n;j++){
        printf(" %d ",array[j]);
    }
    printf("}");
}