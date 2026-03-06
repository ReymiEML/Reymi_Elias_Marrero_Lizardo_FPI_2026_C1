#include <stdio.h>

/* Calcula longitud.
El programa calcula la longitud de una cadena
sin usar la función strlen. */

int cuenta(char *cadena);   /* Prototipo de función */

int main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, 50, stdin);

    i = cuenta(cad);

    printf("\nLongitud de la cadena: %d\n", i);

    return 0;
}

int cuenta(char *cadena)
/* Esta función calcula la longitud de la cadena */
{
    int c = 0;

    while (cadena[c] != '\0')
        c++;

    return c;
}

