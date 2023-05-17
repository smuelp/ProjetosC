/* algoritmo que mostra a soma dos valores contidos entre dois inteiros digitados (inclusive os
passados): Ex: 2 e 5 retorna 14 */

#include <stdio.h>
void main()
{
    int i, v1, v2, r = 0;
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    if (v2 > v1)
    {
        for (i = v1; i <= v2; i++)
        {
            r += i;
        }
    }
    if (v1 > v2)
    {
        for (i = v2; i <= v1; i++)
        {
            r += i;
        }
    }
    printf("\nResultado retornado: %d\n", r);
    printf("\n\n");
}