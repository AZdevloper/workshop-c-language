#include <stdio.h>
#include <stdlib.h>
int main()
{

    int note;

    printf(" ---------------------------\n");

    printf(" Donnez votre moyenne note : ");
    scanf("%d", &note);

    (note >= 10 && note < 12) ? printf(" passable ") : (note >= 12 && note < 14) ? printf(" la mention assez bien. ")
                                                   : (note >= 14 && note < 16)   ? printf(" bien")
                                                   : (note >= 16 && note < 20)   ? printf("  très bien. ")
                                                   : printf(" cas non valide");
}