/* escolha um dos programas acima que você fez com WHILE e refaça-o utilizando FOR. Depois escolha um
que você fez com FOR e refaça-o com WHILE. */

/* exercício de número 1, originalmente em FOR, agora feito em WHILE */

#include <stdio.h>
void main()
{
    int i, n, valores, x = 0;
    float media;
    printf("\nQuantos valores serão digitados? ");
    scanf("%d", &n);
    while (x < n)
    {
        printf("\n%do valor: ", x + 1);
        x++;
        scanf("%d", &i);
        media = media + i;
    }
    media = media / n;
    printf("\nMédia = %.1f\n\n", media);
}