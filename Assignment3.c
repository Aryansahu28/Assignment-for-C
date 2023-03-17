#include <stdio.h>
int main(){
    int n,total_marks = 0,r;
    float average,percentage;
    printf("Enter the number of subjects\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter the marks of %d subject out of 100\n",i+1);
        scanf("%d",&r);
        
        total_marks = total_marks + r;
        }
    printf("The total marks are %d\n",total_marks);
    average = total_marks/n;
    printf("The average marks of all the subject is %f\n",average);
    percentage = total_marks/(n);
    printf("The percentage as per your marks is %f%%\n",percentage);
}
