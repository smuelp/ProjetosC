/* algoritmo que exibe a tabuada de um valor passado (de 1 até 10) */

#include <stdio.h>
void main()
{
    int i, n, r;
    printf("\n\nInforme um valor: ");
    scanf("%d", &n);
    printf("\nTabuada:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d x %d ", n, i);
        r = n * i;
        printf("= %d", r);
    }
    printf("\n\n");
}