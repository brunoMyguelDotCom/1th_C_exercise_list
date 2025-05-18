// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/03/2025
/* QUESTAO...........:

Escreva um programa que dado os litros de combustível gasto e os quilômetros percorridos por um
automóvel, calcule os gastos de combustível em Reais, calcule também qual a média de consumo que o
carro teve durante a viagem.
(Considerar que um litro custa R$ 5,24)
Calcular e Escrever.:
• Litros de Combustível Gasto.
• Total de Quilômetros Percorridos.
• Total gasto de combustível em Real.
• Consumo Médio de Combustível.*/

#include <stdio.h>

int main()
{
  // declaracao de variaveis
  float km;
  float litrosDeGasolina;

  // atribuicao com input do usuario
  printf("Quantidade de litros.....: ");
  scanf("%f", &litrosDeGasolina);

  printf("Quilometros percorridos..: ");
  scanf("%f", &km);

  // print
  printf("INFORMACOES: \n");

  printf("* Valor do litro da gasolina........: R$ 5.24 \n");
  printf("* Litros de gasolina................: %.2fL\n", litrosDeGasolina);
  printf("* Quilometros percorridos...........: %.2fKm\n", km);

  printf("* Total gasto de combustivel em Real: R$ %.2f \n", litrosDeGasolina * 5.24);
  printf("* Consumo medio de combustivel......: %.2fKm/L\n", km / litrosDeGasolina);

  return 0;
}
