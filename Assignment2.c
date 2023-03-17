// WAP for the simple interest
#include <stdio.h>
int main(){
    int p,t;
    float r,si;
    printf("Enter the principal value\n",p);
    scanf("%d",&p);
    printf("Enter the time \n",t);
    scanf("%d",&t);
    printf("Enter the rate \n",r);
    scanf("%f",&r);
    si = (r*p*t)/100;
    printf("The simple interest is %f",si);
    
}