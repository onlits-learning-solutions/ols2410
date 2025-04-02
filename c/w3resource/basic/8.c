/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

#include <stdio.h>
int main(void)
{
    int days, years, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);
}