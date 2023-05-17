/* algoritmo que informa os números de 1 a 20, e a cada 3 números escreve a palavra PIM ao invés do número */

#include <stdio.h>
void main()
{
    int i = 1, x = 4;
    printf("\nJogo do PIM!\n");
    while (i <= 20)
    {
        if (i == x)
        {
            printf("PIM ");
            x += 4;
        }
        else
        {
            printf("%d ", i);
        }
        i += 1;
    }
    printf("\n\n");
}