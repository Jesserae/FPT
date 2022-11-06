#include <stdio.h>

int main()
{
    int x , a = 0 , b = 0 , c = 0;

    
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &x);
    
    if(x >= 3 && x < 8.5)
    {
        a = 1;
    }
    if( x < 3 || (x > 5.4 && x <= 7.3) || x > 13)
    {   
        b = 1;
    }
    if( x != 3 && x < 9.75)
    {
        c = 1;   
    }
    printf("%d matches conditions : \n", x);
    printf(a ? "A" : " not A");
    printf(b ? " ,B" : " ,not B");
    printf(c ? " ,C" : " ,not C");
    
 
}