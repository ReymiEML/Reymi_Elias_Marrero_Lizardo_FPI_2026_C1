#include <stdio.h>

void inverso(char *);  /* Prototipo */

int main()
{
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    fgets(fra, 50, stdin);

    printf("\nEscribe la linea de texto en forma inversa: ");
    inverso(fra);

    return 0;
}

void inverso(char *cadena)
{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}