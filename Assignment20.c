// WAP to print the reverse of the string
#include <stdio.h>
#include <string.h>
int main(){
    // Using strrev() function
    char str[40]="Computers";
    printf("The reverse of the string is %s\n",strrev(str));
    // Using for loop
    int right,temp;
    char string[40];
    printf("\n--------------------------\n");
    printf("Displaying the reverse of string using for loop\n");
    printf("\n--------------------------\n");
    printf("Enter the string\n");
    scanf("%s",&string);
    right = strlen(string)-1;
    for(int i =0;i<right;i++){
        temp = string[i];
        string[i] = string[right];
        string[right]= temp;
        right--;
    }
    printf("The reverse of the string is \n");
    printf("%s",string);
}