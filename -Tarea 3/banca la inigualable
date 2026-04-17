#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Banca La Inigualable */

int main()
{
    int i;
    int jugados[3];   // Números ingresados por el usuario
    int rifados[3]; // Números aleatorios generados
    int aciertos = 0; // Contador de aciertos

    // Inicializar la semilla de números aleatorios
    srand(time(NULL));

    // Solicitar los 3 números al usuario
    for (i = 0; i < 3; i++)
    {
        printf("Ingrese el numero que deseea %d (entre 10 y 40): ", i + 1);
        scanf("%d", &jugados[i]);
    }

    // Generar 3 números aleatorios entre 10 y 40
    for (i = 0; i < 3; i++)
    {
        rifados[i] = 10 + rand() % 31; // 10 a 40 inclusive
    }

    // Mostrar los números rifados
    printf("\nNumeros rifados: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", rifados[i]);
    }

    // Comparar los números jugados con los rifados
    for (i = 0; i < 3; i++)
    {
        if (jugados[i] == rifados[i])
        {
            aciertos++;
        }
    }

    // Resultado
    if (aciertos == 3)
    {
        printf("\nFelicidades! Ha ganado el premio mayor!");
    }
    else if (aciertos > 0)
    {
        printf("\nUsted tuvo %d acierto(s).", aciertos);
    }
    else
    {
        printf("\nNo hubo ningun numero ganado. Vuelve pronto a Banca la inigualable!");
    }

    return 0;
}
