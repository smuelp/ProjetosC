/* algoritmo que lê 11 números e mostra quantos são pares e quantos são ímpares */

#include <stdio.h>
void main()
{
    int x, y, pares = 0, impares = 0;
    printf("\nInforme 11 valores:\n");
    for (x = 0; x < 11; x++)
    {
        // x são os 11 numeros pedidos
        printf("\n%do valor: ", x + 1);
        // y são os valores armazenados
        scanf("%d", &y);
        if (y % 2 == 0)
        {
            pares++;
        }
        else if (y % 2 != 0)
        {
            impares++;
        }
    }
    printf("\nValores pares: %d", pares);
    printf("\nValores impares: %d\n", impares);
    printf("\n\n");
}