#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

//    int c = 0;
//    int space = 0;

    for (int h = 0; h < height; h++)
    {
        for (int c = 0; c < height; c++)
        {
            if (c + h < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}