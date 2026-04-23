#include <stdio.h>

int main()
{
    int I = 2, CAM = 1;
    long SSE = 0;

    while (I <= 2500)
    {
        SSE = SSE + I;
        printf("\t%d", I);

        if (CAM)
        {
            I = I + 5;
            CAM = 0;
        }
        else
        {
            I = I + 3;
            CAM = 1;
        }
    }

    printf("\nLa suma de la serie es: %ld", SSE);

    return 0;
}