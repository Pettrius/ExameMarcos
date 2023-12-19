#include<stdio.h>

int MediaAritmetica(int numero[10])
{
    int soma = 0;
    int media_do_vetor;

    for (int i = 0; i < 10; i++)
    {
        soma = soma + numero[i];
    }
    media_do_vetor = soma / 10;

    return media_do_vetor;
}

int main()
{
    int vetor[10];
    int retorno;

    printf("Insira os valores no vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    retorno = MediaAritmetica(vetor);

    printf("A media aritmetica desse vetor eh: %d.\n", retorno);
}