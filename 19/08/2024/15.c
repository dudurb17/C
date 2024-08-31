// Joãozinho tem que ajudar seu pai. Um relatório específico com alguns números está saindo com caracteres indesejáveis no meio. A ideia é apenas somar os 3 valores que aparecem em cada linha sempre na mesma posição, ignorando as letras e apresentar esta soma. Não existem espaços em branco na linha.

// Entrada
// A primeira linha de entrada contém um inteiro N (N < 100000). Seguem N linhas com exatos 14 caracteres que devem ser lidas e delas extraídos e somados os três números existentes.

// Saída
// Para cada linha de entrada, seu programa deve apresentar um valor numérico inteiro, que é a soma dos 3 números existentes na linha.

#include <stdio.h>

int main()
{
  int qntCasos;
  scanf("%d", &qntCasos);

  while (qntCasos > 0)
  {
    char frase[14];
    scanf("%s", frase);

    int sum = 0;
    int currentNumber = 0;

    for (int i = 0; i < 13; i++)
    {
      if (frase[i] >= '0' && frase[i] <= '9')
      {
        currentNumber = currentNumber * 10 + (frase[i] - '0');
      }
      else
      {
        sum += currentNumber;
        currentNumber = 0;
      }
    }

    sum += currentNumber; 

    printf("%d\n", sum);
    qntCasos--;
  }

  return 0;
}