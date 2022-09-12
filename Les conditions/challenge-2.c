
#include <stdio.h>

int main()
{
    char lettre;

    printf("Entrer Un lettre : \n");
    scanf("%s", &lettre);

    switch (lettre)
    {
    case 'e':
        printf("  voyelle ! \n");
        break;
    case 'a':
        printf("  voyelle ! \n");
        break;
    case 'u':
        printf("  voyelle ! \n");
        break;
    case 'o':
        printf("  voyelle ! \n");

        break;
    case 'i':
        printf("  voyelle ! \n");
        break;
    case 'y':
        printf("  voyelle ! \n");

        break;
    default:
        printf("pas voyelle ! ");
    }

    return 0;
}
