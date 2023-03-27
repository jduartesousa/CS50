#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    //prompt user for string
    string message = get_string("Message: ");

    //translate string to ascii
    for (int i = 0; message[i] != '\0'; i++)
    {
        //criar o array de 8 bits
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0 };

        //convert to ascii
        int decimal = message[i];

        //convert ascii to binary
        //binary_j %2, por exemplo 4%2=0 (então 0..)(agora 4/2 para obter no novo decimal); depois 2%2=0 (00.); depois 1%2=1 (001)
        int j = 0;

        while (decimal > 0)
        {
            binary[j] = decimal % 2;
            decimal = decimal / 2;
            j++;
        }

        //este array apresenta o resultado do binário, mas ao contrário. Logo,
        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");


    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
