#include <stdio.h>

int main()
{
    int Number1, Number2;
    printf("Entrer deux Nombre : \n");
    scanf("%d%d", &Number1, &Number2);

    Number1 == Number2 ? printf("les deux valeur son identique, sont triple est : %d \n", Number1 * 3) : printf("la somme de deux valeur est :%d \n", Number1 + Number2);

    return 0;
}
