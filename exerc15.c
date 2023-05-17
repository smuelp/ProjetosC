/* algoritmo que calcula a divisão através de subtrações sucessivas */

#include <stdio.h>
void main()
{
    int dividendo, divisor, quociente, resto = 0, aux = 0;
    printf("\n\nDividendo: ");
    scanf("%d", &dividendo);
    printf("\nDivosor: ");
    scanf("%d", &divisor);
    resto = dividendo % divisor;
    quociente = 0;
    printf("\n%d dividido por %d = ", dividendo, divisor);
    while (dividendo > resto)
    {
        dividendo = dividendo - divisor;
        aux++;
        printf("%d  ", dividendo);
    }
    printf("= %d", aux);
    printf("\n\n");
}