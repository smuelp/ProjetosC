/* algoritmo que diz se um número digitado é ou não um número primo */

#include <stdio.h>
int main()
{
    int x, i, r = 0;

    printf("Informe um numero: ");
    scanf("%d", &x);

    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            r++;
            break;
        }
    }

    if (r == 0 && x != 0)
    {
        printf("%d é um numero primo\n", x);
    }
    else
    {
        printf("%d não é um numero primo\n", x);
    }
    return 0;
}