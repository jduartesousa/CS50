#include <cs50.h>
#include <stdio.h>
#include <math.h>

int count_letters(string text);
int count_l;

int count_words(string text);
int count_w;

int count_sentences(string text);
int count_s;

int main(void)
{
    //Prompt user for text
    string text = get_string("Text: ");
    float L;
    float S;

    //Print and stores the number of letters in text
    count_letters(text);
    //printf("%i letters\n", count_l);

    //Print and stores the number of words in text
    count_words(text);
    //printf("%i words\n", count_w);

    //Print and stores the number of sentences
    count_sentences(text);
    //printf("%i sentences\n", count_s);

    L = count_l / (float)count_w * 100;
    S = count_s / (float)count_w * 100;
    //é necessário dizer que a data type é float para 1 dos valores senao da 0
    float calculation = (0.0588 * L - 0.296 * S) - 15.8;
    // where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

    int index = round(calculation);

    //printf("letter: %i, words: %i, sentences: %i\n", count_l, count_w, count_s);
    //printf("L: %f S: %f\n", L, S);
    //printf("calculation %f\n", calculation);
    //printf("index %i\n", index);

    if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", index);
    }
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text)
{
    //count letters in text
    count_l = 0;
    int i = 0;
    while (text[i] != '\0')
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            count_l++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (count_l);
}

int count_words(string text)
{
    count_w = 1;
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == 32)
        {
            count_w++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (count_w);
}

int count_sentences(string text)
{
    count_s = 0;
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == 33 || text[i] == 63 || text[i] == 46)
        {
            count_s++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (count_s);
}