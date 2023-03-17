// WAP to calculate the area of square using function
#include <stdio.h>
void areaofsqr(int a){
    printf("The area of square is %d",a*a);
}
int main(){
    int a;
    printf("Enter the length of square \n");
    scanf("%d",&a);
    areaofsqr(a);
}