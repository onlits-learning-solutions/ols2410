#include <stdio.h>
int main(void)
{
    int n, t, d, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        d = t % 10;
        rev = rev * 10 + d;
        t /= 10;
    }
    if (n == rev)
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
    return 0;
}