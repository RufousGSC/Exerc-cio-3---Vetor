#include <stdio.h>
//1. Faça um programa que receba como entrada um número inteiro entre 0
//e 99999, faça com que inicialize o vetor com cada dígito do número. Por
//exemplo, se o número for 4723, o vetor deverá, ao final, conter os
//valores {0,4,7,2,3}.



int main()
{
    int numero;
    int vetor[5];
    int indice = 5;

    printf("adicione um valor entre 0 e 99999\nNumero: ");
    scanf("%d", &numero);

    if(numero < 0 || numero > 99999)
    {
        printf("Coloque um valor que esta Entre 0 e 99999");
    }
    else
    {
        while(numero > 0)
        {
            for(int i = 0; i < 5; i++)
            {
                vetor[i] = numero % 10;
                numero /= 10;
            }
        }
        for(int i = 4; i > -1; i--)
        {
            indice--;
            printf("Indice %d:{%d}\n", indice, vetor[i]);
        }
        printf("vetor[5] = {%d, %d, %d, %d, %d},", vetor[4], vetor[3], vetor[2], vetor [1], vetor[0]);
    }
    return 0;
}
