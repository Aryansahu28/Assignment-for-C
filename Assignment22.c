// WAP to swap the values using call by values
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the values a and b\n");
    scanf("%d%d", &a, &b);
    printf("The values of a and b are %d and %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("The values of a and b after swap are %d and %d", a, b);
}