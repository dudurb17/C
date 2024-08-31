// Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

// Entrada
// O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

// Saída
// Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

#include <stdio.h>

int main()
{
  int num;
  int cem, cinq, vint, dez, cinco, dois, um;
  scanf("%d", &num);
  printf("%d\n", num);
  cem = num / 100;
  num = num % 100;
  cinq = num / 50;
  num = num % 50;
  vint = num / 20;
  num = num % 20;
  dez = num / 10;
  num = num % 10;
  cinco = num / 5;
  num = num % 5;
  dois = num / 2;
  num = num % 2;
  um = num;
  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n", cinq);
  printf("%d nota(s) de R$ 20,00\n", vint);
  printf("%d nota(s) de R$ 10,00\n", dez);
  printf("%d nota(s) de R$ 5,00\n", cinco);
  printf("%d nota(s) de R$ 2,00\n", dois);
  printf("%d nota(s) de R$ 1,00\n", um);

  return 0;
}