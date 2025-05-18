// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/03/2025
/* QUESTAO...........:

Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do
combustível é de R$ 5,24, escreva um algoritmo para ler: a marcação do hodômetro (Km) no início do dia, a
marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos
passageiros.
Apresentar como saída.:
• Marcação do Odômetro Inicial
• Marcação do Odômetro Final
• Quantidade de Quilômetros Percorridos no Dia.
• Lucro (líquido) do Dia
• Média do Consumo em Km/L
• Lucro (líquido) do Dia*/

#include <stdio.h>

int main()
{
    // declaracao de variaveis
    float marcInicial;
    float marcFinal;
    float combustivelGasto;
    float valorRecebido;

    float kmPercorridos;
    float custoGasolina;
    float mediaConsumoGasolina;
    float lucroLiquido;


    // atribuicao com input do usuario
        printf("Digite a marcacao INICIAL do odometro: ");
        scanf("%f", &marcInicial);
        printf("Digite a marcacao FINAL do odometro: ");
        scanf("%f", &marcFinal);
        printf("Digite a quantidade de combustivel gasto: ");
        scanf("%f", &combustivelGasto);
        printf("Digite o valor recebido no dia: ");
        scanf("%f", &valorRecebido);

    // logica
        kmPercorridos = marcFinal - marcInicial;
        mediaConsumoGasolina = kmPercorridos / combustivelGasto;
        custoGasolina = combustivelGasto * 5.24;
        lucroLiquido = valorRecebido - custoGasolina;


    // print
    printf("INFORMACOES: \n");

    printf("* Valor do litro da gasolina........: R$ 5.24 \n");
    printf("* Marcacao odometro INICIAL.........: %.2fKm\n", marcInicial);
    printf("* Marcacao odometro FINAL...........: %.2fKm\n", marcFinal);
    printf("* Quilometros percorridos...........: %.2fKm\n", kmPercorridos);

    printf("* Total gasto de combustivel em Real: R$ %.2f \n", custoGasolina);
    printf("* Consumo medio de combustivel......: %.2fKm/L\n", mediaConsumoGasolina);
    printf("* Lucro liquido.....................: R$ %.2f\n", lucroLiquido);

    return 0;
}