// 4.	WAP TO ACCEPT ROLL NUMBERS AND MARKS OF THREE SUBJECTS FROM USER AND PRINT TOTAL MARKS, AVERAGE AND GRADE.

#include <stdio.h>
#include <string.h>

int main()
{
    int sub1, sub2, sub3, rn, total;
    int average;

    printf("Input the Roll Number of the student : ");
    scanf("%d", &rn);
    printf("Input  the marks of sub1, sub2  and sub3  : \n");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);

    total = (sub1+sub2+sub3);
    printf("Your roll number is %d\n",rn);
    printf("Your marks of sub 1 : %d \n Your marks of sub 2 : %d \n Your marks of sub 3 : %d \n ",sub1,sub2,sub3);
    printf("Your total marks is %d\n",total);


    average = total/3;

    if (average >= 85)
    {
        printf("GRADE A");
    }
    else if((average < 85) && (average >= 60))
    {
        printf("GRADE B");
    }

    
    else if ((average < 60) && (average >= 36))
        {
            printf("GRADE C");
        }
        
    else
        {
            printf("Fail");
        }
    


}