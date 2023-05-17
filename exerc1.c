/* algoritmo que solicita ao usuário a quantidade de valores que serão digitados, lê os n valores e
exibe a média */

#include <stdio.h>
void main()
{
    int i, n, x;
    float media;

    printf("\nQuantos valores serão digitados? ");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {
        printf("\n%do valor: ", x + 1);
        scanf("%d", &i);
        media = media + i;
    }

    media = media / n;
    printf("\nMédia = %.1f\n\n", media);
}