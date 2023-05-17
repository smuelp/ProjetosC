/* exibe todos os números de 0 até 100, exceto com algarismo iguais */

#include <stdio.h>
void main()
{
    int x = 0;
    printf("\nSequência:\n");
    while (x <= 100)
    {
        printf("\n%d", x);
        if (x == 10 || x == 21 || x == 32 || x == 43 || x == 54 || x == 65 || x == 76 || x == 87 || x == 98)
        {
            x += 1;
        }
        x++;
    }
    printf("\n\n");
}