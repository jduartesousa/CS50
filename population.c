#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt for start size
    int start, finish, n;
    n = 0;
    do
    {
        start = get_int("start population size: ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        finish = get_int("finish population size: ");
    }
    while (finish < start);

    // TODO: Calculate number of years until we reach threshold
    if (start == finish)
    {
        printf("Years: %i\n", n);
    }
    else
    {
        do
        {
            start = start + ((start / 3) - (start / 4));
            n++;
        }
        while (start < finish);
        printf("Years: %i\n", n);
    }
}
