/* algoritmo que mostra a sequencia de Fibonacci antes um número digitado pelo usuário. Ex: Se
ler 10 mostra 1 1 2 3 5 8 */

#include <stdio.h>
void main()
{
    int n, v1, v2 = 0, aux = 1;
    printf("\n\nInforme um valor: ");
    scanf("%d", &n);
    printf("\nSequencia de Fibonacci: ");
    if (n < 0)
    {
        printf("Indeterminado!\n\n");
    }
    else
    {
        for (v1 = 1; v1 < n;)
        {
            printf("%d  ", aux);
            aux = v1 + v2;
            v2 = v1;
            v1 = aux;
        }
    }
    printf("\n\n");
}