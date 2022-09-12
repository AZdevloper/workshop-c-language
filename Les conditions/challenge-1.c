#include <stdio.h>

int main()
{
    int Number;

    printf("Entrer Un Nombre : \n");
    scanf("%s", &Number);

    if (Number % 2 == 0)
    {
        printf("se nomber est paire");
    }
    else
        printf("se nomber est unpaire ");

    return 0;
}
