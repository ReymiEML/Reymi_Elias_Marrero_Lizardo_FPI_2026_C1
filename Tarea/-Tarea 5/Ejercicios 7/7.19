#include <stdio.h>
#include <ctype.h>

int cuentap(char *);  /* Prototipo */

int main()
{
    int i;
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    fgets(fra, 50, stdin);

    i = cuentap(fra);

    printf("\nLa linea de texto tiene %d palabras", i);

    return 0;
}

int cuentap(char *cad)
{
    int i = 0, en_palabra = 0;

    while (*cad != '\0')
    {
        if (!isspace(*cad) && en_palabra == 0)
        {
            en_palabra = 1;
            i++;
        }
        else if (isspace(*cad))
        {
            en_palabra = 0;
        }

        cad++;
    }

    return i;
}