/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int hh, mm;
    float ss;
    
    printf("Enter time: hour, minute, second \n");
    fflush(stdout);
    scanf("%d %d %f" , &hh ,&mm, &ss);
    printf("The entered time is : %d hours %d minutes and %.2f seconds ", hh ,mm ,ss);
    

    return 0;
}
