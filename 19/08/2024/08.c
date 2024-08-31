// A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

// Entrada
// O arquivo de entrada contém um valor inteiro N (0 < N < 46).

// Saída
// Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.

int main()
{
  int N;

  scanf("%d", &N);

  int a = 0, b = 1, c;

  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      printf("%d", a);
    }
    else if (i == 1)
    {
      printf(" %d", b);
    }
    else
    {
      c = a + b;
      printf(" %d", c);
      a = b;
      b = c;
    }
  }

  printf("\n");

  return 0;
}