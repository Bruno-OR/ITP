#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "Portuguese"); // Usado para imprimir corretamente os acentos e caracteres especiais em portugu�s

    int num1, num2, soma, sub, resto;
    float div, media;

    printf("\nDigite o primeiro n�mero inteiro:");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro:");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    div = (float)num1 / num2;
    resto = num1 % num2;
    media = (float)soma / 2;

    printf("\n--- Resultados ---\n\n");

    printf("%d + %d = \t%d\n", num1, num2, soma);
    printf("\n%d - %d = \t%d\n", num1, num2, sub);
    printf("\n%d / %d = \t%.2f\n", num1, num2, div);
    printf("\nO resto da divis�o entre %d e %d = %d", num1, num2, resto);
    printf("\nA m�dia aritm�tica entre %d e %d = %.2f", num1, num2, media);

    return 0;
}