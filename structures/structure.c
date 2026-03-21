#include<stdio.h>
#include<stdlib.h>

struct student
{
    char *name;
    int rollnum;
    float marks;
};

int main()
{
   struct student std1 = {"Arjun", 21, 24.5}; 
   struct student std2, std3;

   // Assign values to std2
   std2.name = "Rama";
   std2.rollnum = 22;
   std2.marks = 34.06;

   // Allocate memory for std3.name
   std3.name = (char *)malloc(20 * sizeof(char));

   printf("Enter Name, Rollnum and Marks of std3: ");
   scanf("%s %d %f", std3.name, &std3.rollnum, &std3.marks);

   // Output
   printf("\nstd1 : %s %d %.2f\n", std1.name, std1.rollnum, std1.marks);
   printf("std2 : %s %d %.2f\n", std2.name, std2.rollnum, std2.marks);
   printf("std3 : %s %d %.2f\n", std3.name, std3.rollnum, std3.marks);

   // Free allocated memory
   free(std3.name);

   return 0;
}