#include <stdio.h>
int isLeapYear(int year)
{
    if(year%400 == 0)
    {
        return printf("%d is leap year\n",year);
    }
    else{
        return printf("%d is not leap year\n", year);
    }
}

int numberOfDays(int month, int year)
{
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("month %d of %d has 31 days",month , year);
    }else if (month == 2 && year%400 == 0)
    {
        printf("month %d  of %d has 29 days",month , year);
    }else if (month == 2)
    {
        printf("month %d of %d has 28 days",month , year);
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        printf("month %d of %d has 30 days",month , year);
    }else
    {
        printf("You have entered invalid month");
    }
}
int main()
{
    int year, month;
    printf("Please enter year: ");
    scanf("%d", &year);
    printf("Please enter month: ");
    scanf("%d", &month);
    isLeapYear(year);
    numberOfDays(month,year);

    return 0;
}

