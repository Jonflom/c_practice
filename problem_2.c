//Escribe un programa que al recibir como dato un número
//entero positivo N, calcule el resultado de la siguiente
//serie:

// 1 + (1/2) + (1/3) + (1/4) ... + (1/N)

#include <stdio.h>

int main(void)
{
    int n;
    int a;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("\n");

    for (a = 1; a <= n; a++)
    {
        printf(" + 1/%d", a);
    }    
    printf("\n");
}