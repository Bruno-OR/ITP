#include <stdio.h>
#include <math.h> //Para incluir a fun��o pow
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "Portuguese"); // Usado para imprimir corretamente os acentos e caracteres especiais em portugu�s

    float capital_inicial, taxa_juros, montante_final;
    int tempo_anos;

    printf("\nDigite o capital inicial: R$ ");
    scanf("%f", &capital_inicial);
    printf("Qual a taxa de juros? (Em %%): ");
    scanf("%f", &taxa_juros);
    printf("Agora digite o tempo de investimento em anos: ");
    scanf("%d", &tempo_anos);

    montante_final = capital_inicial * pow(1 + (taxa_juros / 100), tempo_anos);

    printf("\n--- Resultado do Investimento ---\n");
    printf("\nAp�s %d anos, o montante final ser� de: R$ %.2f", tempo_anos, montante_final);

    return 0;
}