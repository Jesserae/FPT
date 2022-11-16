#include <stdio.h>
#include <ctype.h>

void characterCheck (char a)
{
    if(a >= 'A' && a <= 'Z')
    {
        printf("The character is Upper Case");
    }else if(a >= 'a' && a <= 'z')
    {
        printf("The character is Lower Case");
    }else if(isdigit(a))
    {
        printf("The character is Numeric");
    }else if(isalnum(a))
    {
        printf("The character is Aphanumeric");
    }
    
}
int main()
{
    char a;
    
    printf("Please enter a character: ");
    scanf("%c", &a);
    characterCheck(a);

    return 0;
}
