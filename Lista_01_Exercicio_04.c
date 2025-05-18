// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/03/2025
/* QUESTAO...........:

Uma empresa tem para um determinado funcionário uma ficha contendo o nome, número de horas
trabalhadas e o n0 de dependentes de um funcionário. Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes.
b) Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Faça um programa para ler o Nome, número de horas trabalhadas e número de dependentes de um
funcionário.
Após a leitura, escreva qual o Nome, salário bruto, os valores descontados para cada tipo de imposto e
finalmente qual o salário líquido do funcionário.*/

#include <stdio.h>

int main() {
    // declaracao de variaveis
    char nomeDoFuncionario[50];
    int numeroDeHorasTrabalhadas;
    int numeroDeDependentesDoFuncionario;

    float valorTotalHorasTrabalhadas;
    float valorTotalDependentes;

    float salarioBruto;

    float descontoInss;
    float descontoIr;
    float descontoTotal;
    float salarioLiquido;

    // atribuicao com input do usuario
    printf("Digite o nome do funcionario: ");
    fflush(stdin);
    fgets(nomeDoFuncionario, 50, stdin);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &numeroDeHorasTrabalhadas);

    printf("Digite o numero de dependentes do funcionario: ");
    scanf("%d", &numeroDeDependentesDoFuncionario);

    // logica
    valorTotalHorasTrabalhadas = numeroDeHorasTrabalhadas * 12;
    valorTotalDependentes = numeroDeDependentesDoFuncionario * 40;

    salarioBruto = (valorTotalHorasTrabalhadas + valorTotalDependentes);

    descontoInss = salarioBruto * 0.085;
    descontoIr = salarioBruto * 0.05;
    descontoTotal = descontoInss + descontoIr;

    salarioLiquido = salarioBruto - descontoTotal;

    // print

    printf("Informacoes sobre o funcionario:\n");
    printf("* Nome.................: %s\n", nomeDoFuncionario);
    printf("* Salario bruto........: R$%.2f \n", salarioBruto);
    printf("* Valor descontado INSS: R$%.2f \n", descontoInss);
    printf("* Valor desconto IR....: R$%.2f \n", descontoIr);
    printf("* Valor salario liquido: R$%.2f \n", salarioLiquido);

    return 0;
}
