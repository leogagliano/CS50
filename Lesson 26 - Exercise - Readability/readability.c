#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string texto = get_string("TEXTO: ");

    int letters = 0, words = 0, sentences = 0;

    for (int i = 0; i < strlen(texto); i++)
    {
        if (isalpha(texto[i]))
        {
            letters++;
        }

        if ((texto[i - 1] != ' ' && texto[i] == ' ' && texto[i + 1] != ' '))        {
            words++;
        }

        if (texto[i] == '.' || texto[i] == '?')
        {
            sentences++;
        }
    }

    if (sentences == 0)
        sentences++;

    words++;

    double l = (double) letters / (double) words * 100;
    double s = (double) sentences / (double) words * 100;

    double indice = 0.0588 * l - 0.296 * s - 15.8;

    int grade = round(indice);

    /*
    printf("\nletters: %d\n", letters);
    printf("\nwords: %d\n", words);
    printf("\nsentencas: %d\n", sentences);

    printf("\n valor l: %lf \n", l);
    printf("\n valor s: %lf \n", s);
    */

    if (indice < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (indice >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}
