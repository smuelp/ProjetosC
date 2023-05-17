/* algoritmo que lê 15 números e mostra qual é o maior, o menor e a média */

#include <stdio.h>
void main()
{
    int x, y = 0, maior = 0, menor = 0;
    float media = 0;

    printf("Informe 15 numero:\n");
    for (x = 1; x <= 15; x++)
    {
        scanf("%d", &y);
        if (y > maior)
        {
            maior = y;
        }
        else if (y < menor)
        {
            menor = y;
        }
        if (menor == 0)
        {
            menor = y;
        }
        media = media + y;
    }
    media = media / 15;
    printf("\nO menor numero eh: %d", menor);
    printf("\nO maior numero eh: %d", maior);
    printf("\nA media dos numeros eh: %.1f", media);
}