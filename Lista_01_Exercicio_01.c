// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/03/2025
/* QUESTAO...........:

Dado as seguintes informações de um funcionário: Nome, idade cargo e o seu salário bruto considere:
a) O salário bruto teve um reajuste de 38%.
b) O funcionário receberá uma gratificação de 20% do salário bruto.
c) O Salário total é descontado em 15% de Imposto de Renda
Faça um programa para:
• Imprimir Nome, idade e cargo.
• Imprimir o salário bruto Anterior.
• Imprimir o salário bruto corrigido.
• Imprimir o valor da gratificação.
• Imprimir o valor do desconto.
• Imprimir o salário líquido.*/

#include <stdio.h>

int main()
{
    // declaracao de variaveis
    char nome[50];
    int idade;
    char cargo[30];
    float salarioBruto;


    // atribuicao com input do usuario
    printf("Digite seu nome: ");
    fflush(stdin);
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu cargo: ");
    fflush(stdin);
    fgets(cargo, 30, stdin);

    printf("Digite seu salario bruto: ");
    scanf("%f", &salarioBruto);


    // logica
    float salarioComReajuste = salarioBruto * 0.38 + salarioBruto;
    float valorDaGratificacao = salarioComReajuste * 0.2;

    float salarioComGratificacao = salarioComReajuste + valorDaGratificacao;

    float valorDoDesconto = salarioComGratificacao * 0.15;

    float salarioLiquido = salarioComGratificacao - valorDoDesconto;

    // print

    printf("Informacoes sobre o funcionario:\n* Nome......................: %s* Idade.....................: %d \n* Cargo.....................: %s \n", nome, idade, cargo);

    printf("* Salario bruto anterior....: R$%.2f \n\n", salarioBruto);
    printf("* Salario bruto pos reajuste: R$%.2f \n", salarioComReajuste);
    printf("* Valor da gratificacao.....: R$%.2f \n", valorDaGratificacao);
    printf("* Valor do desconto.........: R$%.2f \n", valorDoDesconto);
    printf("* Salario liquido...........: R$%.2f \n", salarioLiquido);

    return 0;
}
