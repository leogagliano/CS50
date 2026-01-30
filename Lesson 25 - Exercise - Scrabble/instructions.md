Scrabble



Determine qual das duas palavras no jogo Scrabble vale mais.

$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!

Background

No jogo Scrabble, os jogadores criam palavras para marcar pontos e o número de pontos é a soma dos valores dos pontos de cada letra da palavra.



Por exemplo, se quiséssemos pontuar a palavra Code, observaríamos que, nas regras gerais do Scrabble, o C vale 3 pontos, o o vale 1 ponto, o d vale 2 pontos e e vale 1 ponto. Somando isso, obtemos que Code vale 3 + 1 + 2 + 1 = 7 pontos.

Instruções

Em um arquivo chamado scrabble.c, dentro da pasta /pset2/scrabble, implemente um programa em C que determine o vencedor de um jogo curto semelhante ao Scrabble.

Seu programa deve solicitar entrada duas vezes: uma vez para que "Jogador 1" insira sua palavra e outra vez para que "Jogador 2" insira sua palavra. Em seguida, dependendo de qual jogador marcar mais pontos, seu programa deve imprimir “Player 1 wins!” (caso o jogador 1 ganhe), “Player 2 wins!” (se o jogador 2 venceu) ou “Tie!” (caso os dois jogadores pontuem igualmente).



Pseudocódigo

Se ainda não tiver certeza de como resolver o problema em si, divida-o em problemas menores que você provavelmente pode resolver primeiro. Por exemplo, este exercício se divide em:





Solicitar ao usuário duas palavras;



Calcular os pontos de cada palavra;



Imprimir o vencedor.



Utilize o código abaixo como base para a sua implementação:

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Solicitar ao usuário duas palavras

    // Calcular os pontos de cada palavra

    // Imprimir o vencedor
}

int compute_score(string word)
{
    // Computa e devolve os pontos de cada palavra
}



Detalhes de Implementação

Os valores dos pontos de cada letra do alfabeto foram armazenados em uma matriz de inteiros chamada POINTS .





Por exemplo, ‘A’ ou ‘a’ vale 1 ponto (representado por POINTS[0]), ‘B’ ou ‘b’ vale 3 pontos (representado por POINTS[1]), e assim por diante.

Observe que criamos um protótipo para uma função auxiliar chamada compute_score() que recebe uma string como input e retorna um int. Sempre que quisermos atribuir valores de pontos a uma palavra específica, podemos chamar essa função. Observe que este protótipo é necessário para o C saber que compute_score() existe posteriormente no programa.

Em compute_score(), seu programa deve calcular, usando o array POINTS, e retornar a pontuação para o argumento string. Os caracteres que não são letras devem receber zero pontos e as letras maiúsculas e minúsculas devem receber os mesmos valores de pontos.





Por exemplo, ! vale 0 pontos, enquanto A e a valem 1 ponto.



Embora as regras do Scrabble normalmente exijam que uma palavra esteja no dicionário, não há necessidade de verificar isso neste problema!

Dicas

Você pode achar as funções isupper() e islower() úteis para você. Essas funções usam um caractere como argumento e retornam um valor diferente de zero se o caractere for maiúsculo (para isupper) ou minúsculo (para islower).

Para encontrar o valor no n-ésimo índice de um array chamado arr, podemos escrever arr[n]. Podemos aplicar isso a strings também, já que strings são arrays de caracteres.

Lembre-se de que os computadores representam caracteres usando ASCII, um padrão que representa cada caractere como um número.

Como testar seu código

Seu código deve resolver os seguintes casos de teste:

$ ./scrabble
 Player 1: Question? 
 Player 2: Question! 
 Tie!

$ ./scrabble 
Player 1: Oh, 
Player 2: hai! 
Player 2 wins!

$ ./scrabble 
Player 1: COMPUTER 
Player 2: science 
Player 1 wins!

$ ./scrabble 
Player 1: Scrabble 
Player 2: wiNNeR 
Player 1 wins!

Execute o seguinte comando para avaliar a exatidão do seu código usando check50 . Mas certifique-se de compilar e testar você mesmo!
