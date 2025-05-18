// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/03/2025
/* QUESTAO...........:

Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada
vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de custo de cada
bicicleta vendida, dividida igualmente entre eles.
Escreva um programa em linguagem C, que leia o número de empregados da loja, o valor do salário-
mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas.
Calcule e escreva: O salário final de cada empregado e o lucro (líquido) da loja.*/

#include <stdio.h>

int main() {
    // declaracao de variaveis
    float precoCustoBicicleta;
    float precoFinalBicicleta;

    float valorDoSalario;
    float salarioBaseVendedor;
    float salarioLiquidoVendedor;
    float custoTotalLoja;
    float lucroLiquidoLoja;

    float valorComissao;

    int numeroDeFuncionarios;
    int numeroBicicletasVendidas;

    // atribuicao de valores com input do usuario
    printf("Insira o numero de funcionarios: ");
    scanf("%d", &numeroDeFuncionarios);

    printf("Insira o valor do salario: ");
    scanf("%f", &valorDoSalario);

    printf("Insira o preco do custo de cada bicicleta: ");
    scanf("%f", &precoCustoBicicleta);

    printf("Insira o numero de bicicletas vendidas: ");
    scanf("%d", &numeroBicicletasVendidas);

    // logica
    salarioBaseVendedor = valorDoSalario * 2;
    valorComissao = precoCustoBicicleta * 0.15 * numeroBicicletasVendidas / numeroDeFuncionarios;
    salarioLiquidoVendedor = salarioBaseVendedor + valorComissao;
    precoFinalBicicleta = precoCustoBicicleta + (precoCustoBicicleta * 0.5);

    custoTotalLoja = precoCustoBicicleta * numeroBicicletasVendidas + salarioBaseVendedor * numeroDeFuncionarios;
    lucroLiquidoLoja = precoFinalBicicleta * numeroBicicletasVendidas - custoTotalLoja;

    // print
    printf("INFORMACOES:\n");
    printf("Salario de cada funcionario: R$%.2f \n", salarioLiquidoVendedor);
    printf("lucro liquido loja: R$%.2f\n" , lucroLiquidoLoja);


    return 0;
}
