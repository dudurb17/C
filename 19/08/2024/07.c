// Fiona sempre amou poesia, e recentemente descobriu uma forma poética fascinante. Tautogramas são um caso especial de aliteração, que é a ocorrência da mesma letra no início de palavras adjacentes. Em particular, uma sentença é um tautograma se todas suas palavras começam com a mesma letra.

// Por exemplo, as seguintes sentenças são tautogramas:
// Flowers Flourish from France
// Sam Simmonds speaks softly
// Peter pIckEd pePPers
// truly tautograms triumph
// Fiona quer deslumbrar seu namorado com uma carta romântica repleta desse tipo de sentenças. Por favor, ajude Fiona a verificar se cada sentença que ela escreveu é um tautograma ou não.
// Entrada
// Cada caso de teste é dado em uma única linha que contém uma frase. Uma frase consiste de uma sequência de no máximo 50 palavras separadas por espaços simples. Uma palavra é uma sequência de no máximo 20 letras do alfabeto inglês (maiúsculas e minúsculas). Uma palavra contém ao menos uma letra e uma sentença contém ao menos uma palavra.

// O último caso de teste é seguido de uma linha contendo apenas o caractere '*' (asterisco).
// Saída
// Para cada caso de teste, imprima uma única linha contendo o caractere 'Y' se a sentença é um tautograma, ou um 'N' caso contrário.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char frase[1050];

  while (1)
  {

    fgets(frase, 1050, stdin);

    if (frase[0] == '*')
    {
      break;
    }

    char first = tolower(frase[0]);
    char answer = 'Y';

    for (int i = 1; i < strlen(frase); i++)
    {
      if (frase[i] == ' ' && frase[i + 1] != '\0')
      {

        if (tolower(frase[i + 1]) != first)
        {
          answer = 'N';
          break;
        }
      }
    }

    printf("%c\n", answer);
  }

  return 0;
}