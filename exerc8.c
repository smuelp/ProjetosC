/* algoritmo que calcula e exibe o fatorial de um número digitado. exibe no formato exemplificado
abaixo: Ex: 5! = 5 x 4 x 3 x 2 x 1 = 120 */

#include <stdio.h>
void main ()
{
    int n, fat;
    printf("\nInsira um valor para calcular a fatorial: ");
    scanf("%d", &n);
    printf("\nFatorial: %d! = %d ", n, n);
    for (fat = 1; n > 1; n--)
    {
        printf("x %d ", n - 1);
        fat = fat * n;
    }
    printf("= %d", fat);
    printf("\n\n");
}