#include <stdio.h>
#include <math.h> //Para incluir a fun��o pow
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "Portuguese"); // Usado para imprimir corretamente os acentos e caracteres especiais em portugu�s
    float peso, altura, imc;

    printf("\nQual o seu peso (em Kg)? ");
    scanf("%f", &peso);
    printf("Qual sua altura (em metros)? ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2); // calcula base^expoente

    printf("\n--- Resultado ---\n\n");
    printf("Seu IMC �: %.2f", imc);

    return 0;
}