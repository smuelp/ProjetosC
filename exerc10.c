/* algoritmo que recebe um inteiro e mostra seus divisores. ex: 12 é divisível por 12, 6, 4, 3, 2 e por 1 */

#include <stdio.h>
void main()
{
    int n, i, r;
    printf("Digite um número: ");
    scanf("%d", &n);
    r = n;
    printf("%d é divisível por: ", n);
    for (i = 1; 1 <= n; i++)
    {
        if (n % r == 0)
        {
            printf("%d  ", r);
        }
        r--;
    }
}