#include <stdio.h>
#include <stdlib.h>
int main()
{

    char lettre;

    printf(" ---------------------------\n");

    printf(" Donnez une lettre : ");
    scanf("%c", &lettre);

    ((int)lettre < 90 && (int)lettre > 65) ? printf(" ce lettre est majuscule ") : printf(" ce lettre pas majuscell ");
}