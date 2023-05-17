/* exercício de número 14, originalmente em WHILE, agora feito em FOR */

#include <stdio.h>
void main()
{
    int x;
    printf("\nSequência:\n");
    for (x = 0; x <= 100; x++)
    {
        printf("\n%d", x);
        if (x == 10 || x == 21 || x == 32 || x == 43 || x == 54 || x == 65 || x == 76 || x == 87 || x == 98)
        {
            x += 1;
        }
    }
    printf("\n\n");
}
