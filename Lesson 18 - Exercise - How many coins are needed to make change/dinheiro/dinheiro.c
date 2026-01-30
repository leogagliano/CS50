#include <math.h>
#include <stdio.h>

int main(void)
{

    printf("\nvalor do troco: ");

    float valor;                    // how much change is due to the customer
    int moedas[5] = {1, 5, 10, 25}; // coins available to the change
    int qtd_moedas = 0;             // how many coins will be used to form the change

    while (1)
    {
        valor = 0;
        scanf("%f", &valor);

        float _valor = valor;

        while (_valor > 0)
        {

            for (int i = 3; i >= 0; i--)
            {
                if (fmod(_valor, moedas[i]) != _valor && _valor != 0)
                {
                    qtd_moedas += (_valor - fmod(_valor, moedas[i])) / moedas[i];

                    _valor = fmod(_valor, moedas[i]);
                }
            }

            printf("quantidade de moedas para formar troco: %i\n\n", qtd_moedas);

            return 0;
        }
    }
}
