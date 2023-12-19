#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    char string_invertida[100];
    int tamanho;

    printf("Digite uma string desejada:\n");
    gets(string);
    fflush(stdin);

    tamanho = strlen(string);

    for (int i = tamanho; i >= 0; i--)
    {
        string_invertida[i] = string[i];
        string_invertida[tamanho] = '\0';
        printf("%c", string_invertida[i]);
    }
}