#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int lenght;

    do
    {
        lenght = get_int("Lenght: ");
    }
    while (lenght < 1);

    int array[lenght];

    array[0] = 1;

    printf("%i\n", array[0]);
    
    for (int i = 1; i < lenght; i++)
    {
        array[i] = 2 * array[i - 1];
        printf("%i\n", array[i]);
    }

}