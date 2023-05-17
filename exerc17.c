/* algoritmo que lê um número natural N e calcula o maior número primo menor do que o número N. */

#include <stdio.h>
int ehPrimo(n)
{
  // verifica se é n primo
  int i;
  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int numeroPrimoMaisProximo(n)
{
  // n é um número natural.
  int primo;
  // for de tras para frente para saber se é primo.
  for (int i = n; i > 0; i--)
  {
    // se for primo, retorna o número.
    if (ehPrimo(i))
    {
      return i;
    }
    else
    {
      // se não for primo, continua.
      continue;
    }
  }
  return 0;
}

int main()
{
  printf("Digite um número natural: ");
  int n;
  scanf("%d", &n);
  printf("O número primo mais próximo é %d.\n", numeroPrimoMaisProximo(n));
  return 0;
}