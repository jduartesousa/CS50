#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a;
    int b;
    a = get_int("select 1st number\n");
    b = get_int("select 2nd number\n");
    if (a > b)
    {
        printf("%i is greater than %i\n", a, b);
    }
    if (a < b)
    {
        printf("%i in greater than %i\n", b, a);
    }
    else
    {
        printf("%i is equal to %i\n", a, b);
    }
}