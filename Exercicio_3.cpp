/* Exercicio_3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
   Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.
*/

#include "stdio.h"

int main()
{
    //Variable Declaration
    float n1, n2, n3, medTotal;
    char *c;

    //Code
    printf("Digite o Primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o Segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o Terceiro numero: ");
    scanf("%f", &n3);

    medTotal = (n1 + n2 + n3) / 3;
    printf("A media calculada e: %.2f\n\n", medTotal);

    scanf("%c", &c);
    return 0;
}
