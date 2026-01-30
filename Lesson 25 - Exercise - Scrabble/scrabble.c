#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int charToInt(char a)
{

    int _n = (int) a - 96;

    if (isupper(a) != 0)
    {
        _n += 32;
    }

    else if (a < 65 || a > 122)
    {
        return 0;
    }

    return _n;
}

int main(void)
{

    int POINTS[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    string palavra1 = get_string("pessoa 1: ");
    int soma1 = 0;

    for (int i = 0; i < strlen(palavra1); i++)
    {

        if (isalpha(palavra1[i]))
        {
            soma1 += POINTS[charToInt(palavra1[i]) - 1];
        }
    }

    string palavra2 = get_string("pessoa 2: ");
    int soma2 = 0;

    for (int j = 0; j < strlen(palavra2); j++)
    {
        if (isalpha(palavra2[j]))
            soma2 += POINTS[charToInt(palavra2[j]) - 1];
    }

    if (soma1 > soma2)
    {
        printf("Player 1 wins!\n");
    }
    else if (soma1 < soma2)
    {
        printf("Player 2 wins!\n");
    }
    else if (soma1 == soma2)
    {
        printf("Tie!\n");
    }

    printf("soma1: %d \n soma2: %d", soma1, soma2);
}
