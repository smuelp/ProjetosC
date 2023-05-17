/* algoritmo que calcula a área do triangulo equilátero, quadrado ou retângulo de acordo com a
opção digitada pelo usuário e quando o usuário digita zero o programa encerra */

#include <stdio.h>
void main()
{
    int x;
    float areaEq, areaQuad, areaRet, b, h, l;

    printf("\nArea de figuras: [Equilatero, Quadrado e Retangulo]\n\n");
    printf("1 - Equilatero\n2 - Quadrado\n3 - Retangulo\n0 - Sair\n\nEscolha uma figura: ");
    scanf("%d", &x);

    while (x != 0)
    {
        switch (x)
        {
        case 1:
            printf("Informe o lado: ");
            scanf("%f", &l);
            areaEq = (l * l / 4) * 1.73205;
            printf("A figura escolhida: Equilatero\nArea: %.1f\n\n", areaEq);
            break;
        case 2:
            printf("Informe o lado: ");
            scanf("%f", &l);
            areaQuad = l * l;
            printf("Figura escolhida: Quadrado\nArea: %.1f\n\n", areaQuad);
            break;
        case 3:
            printf("Informe a base: ");
            scanf("%f", &b);
            printf("Informe a altura: ");
            scanf("%f", &h);
            areaRet = b * h;
            printf("Figura escolhida: Retangulo\nArea: %.1f\n\n", areaRet);
            break;
        default:
            printf("Indeterminado!\n");
        }
        printf("\nEscolha outra figura: ");
        scanf("%d", &x);
    }
    printf("\n");
}