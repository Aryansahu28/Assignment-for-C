// WAP to swap the values using call by reference
#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The values of a and b after swapping are %d and %d ",*a,*b);

}
int main(){
    int a = 3,b=5;
printf("The values of a and b before swapping are %d and %d \n",a,b);
swap(&a,&b);
}