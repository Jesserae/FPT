/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

  int a, b = 0, c;

  printf("Enter 3 digit integer: ");
  scanf("%d", &a);

  while (a != 0) {
    c = a % 10;
    b = b * 10 + c;
    a /= 10;
  }

  printf("Reversed number = %d", b);

  return 0;
}
