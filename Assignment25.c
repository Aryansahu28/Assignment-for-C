// // 25.	WAP TO STORE THE STUDENT NAME AND AGE INTO THE STRUCTURES AND ACCESS STRUCTURE DATA MEMBERS TO DISPLAY THESE VALUES AS AN OUTPUT

#include <stdio.h>
#include <string.h>

struct Student {
   char name[50];
   int age;
};

int main() {
   struct Student student1;
   
   // Input student name and age
   printf("Enter student name: ");
   scanf("%s", student1.name);
   printf("Enter student age: ");
   scanf("%d", &student1.age);
   
   // Output student name and age
   printf("Student name: %s\n", student1.name);
   printf("Student age: %d\n", student1.age);

   return 0;
}
