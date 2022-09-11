#include <stdio.h>
#include <stdlib.h>
int main()
{

    int nombre;

    printf(" ---------------------------\n");

    printf(" Donnez un nombre : ");
    scanf("%d", &nombre);

    nombre == 0 ? printf(" la valeure est null ") : (nombre < 0 ? printf(" la valeure est negative ") : printf(" la valeure est positive "));

 
}