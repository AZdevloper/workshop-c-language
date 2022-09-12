#include <stdio.h>
#include <stdlib.h>
int main()
{

    long years, Mois, Jours, Heures;
    long Secondes, Minutes;

    printf(" ---------------------------\n");

    printf(" Donnez une annee : ");
    scanf("%ld", &years);

    if (years % 4 == 0)
    {
        printf(" l'annee  est bissextile ");
        years = 366;
    }
    else if (years % 4 != 0)
    {
        printf(" l'année  est pas bissextile ");
        years = 365;
    }

    Mois = years * 12;
    Jours = Mois * 30;
    Heures = Jours * 24;
    Minutes = Heures * 60;
    Secondes = (long)Minutes * 60;

    printf(" \n Nomber des annee dans cette anne est  : %d", years);
    printf(" \n Nomber des mois dans cette anne est  : %d", Mois);
    printf(" \n Nomber des jours dans cette anne est  : %d", Jours);
    printf(" \n Nomber des heur dans cette anne est  : %d", Heures);
    printf(" \n Nomber des minuts dans cette anne est  : %ld", Minutes);
    printf(" \n Nomber des secend dans cette anne est  : %ld", Secondes);
    printf(" \n ---------------------------");
}