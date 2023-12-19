#include <stdio.h>

int fatorial1(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return n * fatorial1(n - 1);
    }
}

int fatorial2(int x)
{
    if (x == 0)
    {
        return 1;
    }

    else
    {
        return x * fatorial2(x - 1);
    }
}

int main()
{
    int num1;
    int num2;
    int retorno;
    int retorno2;

    printf("Entre com o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Entre com o segundo numero:\n");
    scanf("%d", &num2);
    
    retorno = fatorial1(num1);
    retorno2 = fatorial2(num2);

    if (retorno > retorno2)
    {
        printf("O maior fatorial eh: %d.\n", retorno);
    }

    if (retorno < retorno2)
    {
        printf("O maior fatorial eh: %d.\n", retorno2);
    }

}