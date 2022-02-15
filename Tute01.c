/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   float sub1,sub2,total,avg;

   printf("Enter the mark of subject 1:");
   scanf("%f",&sub1);

     printf("Enter the mark of subject 2:");
   scanf("%f",&sub2);

    total=sub1+sub2;
    avg=total/2;

    printf("Average : %.2f",avg);
    return 0;
  
  return 0;
}

