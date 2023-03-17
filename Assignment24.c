// Addition of two numbers using pointers
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    int *p1;
    int *p2;
    p1 = &a;
    p2 = &b;
    int sum;
    sum = *p1 + *p2;
    printf("The sum of a and b using pointer are %d",sum);
}