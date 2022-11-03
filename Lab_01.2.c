/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a;
   float sum;
   printf("Please Enter 5 integer nunmber \n");
   printf("Enter 1st number: \t");
   fflush(stdout);
   scanf("%d", &a);
   sum = a;
   printf("Enter 2nd number: \t");
   fflush(stdout);
   scanf("%d", &a);
   sum += a;
   printf("Enter 3rd number: \t");
   fflush(stdout);
   scanf("%d", &a);
   sum += a;
   printf("Enter 4th number: \t");
   fflush(stdout);
   scanf("%d", &a);
   sum += a;
   printf("Enter 5th number: \t");
   fflush(stdout);
   scanf("%d", &a);
   sum += a;
   printf("%.2f", sum);
  

    return 0;
}   
