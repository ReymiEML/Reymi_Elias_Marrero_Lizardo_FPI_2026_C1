#include <stdio.h>
#include <string.h>

/* Vendedores */

typedef struct
{
    char noba[10];   // nombre del banco
    char nucu[10];   // numero de cuenta
} banco;

typedef union
{
    banco che;   // cheque
    banco nomi;  // nomina
    char venta;  // ventanilla
} fpago;

typedef struct
{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
} domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];      // ventas del año
    domicilio domi;
    float sal;
    fpago pago;
    int cla;           // forma de pago
} vendedor;

void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);

int main()
{
    vendedor VENDEDORES[100];
    int TAM;

    do
    {
        printf("Ingrese el numero de vendedores: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);

    Lectura(VENDEDORES, TAM);

    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);

    printf("\nFIN DEL PROGRAMA");

    return 0;
}

void Lectura(vendedor A[], int T)
{
    int I, J;

    for (I = 0; I < T; I++)
    {
        printf("\nIngrese datos del vendedor %d\n", I + 1);

        printf("Numero de vendedor: ");
        scanf("%d", &A[I].num);

        printf("Nombre del vendedor: ");
        scanf("%s", A[I].nom);

        printf("Ventas del año:\n");

        for (J = 0; J < 12; J++)
        {
            printf("Mes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }

        printf("Domicilio del vendedor:\n");

        printf("Calle y numero: ");
        scanf("%s", A[I].domi.cnu);

        printf("Colonia: ");
        scanf("%s", A[I].domi.col);

        printf("Codigo Postal: ");
        scanf("%s", A[I].domi.cp);

        printf("Ciudad: ");
        scanf("%s", A[I].domi.ciu);

        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);

        printf("Forma de pago (Banco=1 Nomina=2 Ventanilla=3): ");
        scanf("%d", &A[I].cla);

        switch (A[I].cla)
        {
            case 1:
                printf("Nombre del banco: ");
                scanf("%s", A[I].pago.che.noba);

                printf("Numero de cuenta: ");
                scanf("%s", A[I].pago.che.nucu);
                break;

            case 2:
                printf("Nombre del banco: ");
                scanf("%s", A[I].pago.nomi.noba);

                printf("Numero de cuenta: ");
                scanf("%s", A[I].pago.nomi.nucu);
                break;

            case 3:
                A[I].pago.venta = 'S';
                break;
        }
    }
}

void F1(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nVentas Totales de los Vendedores\n");

    for (I = 0; I < T; I++)
    {
        SUM = 0;

        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];

        printf("\nVendedor: %d", A[I].num);
        printf("\nVentas: %.2f\n", SUM);
    }
}

void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nIncremento a vendedores con ventas > 1,500,000\n");

    for (I = 0; I < T; I++)
    {
        SUM = 0;

        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];

        if (SUM > 1500000)
        {
            A[I].sal = A[I].sal * 1.05;

            printf("\nNumero de empleado: %d", A[I].num);
            printf("\nVentas: %.2f", SUM);
            printf("\nNuevo salario: %.2f\n", A[I].sal);
        }
    }
}

void F3(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nVendedores con ventas < 300,000\n");

    for (I = 0; I < T; I++)
    {
        SUM = 0;

        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];

        if (SUM < 300000)
        {
            printf("\nNumero de empleado: %d", A[I].num);
            printf("\nNombre: %s", A[I].nom);
            printf("\nVentas: %.2f\n", SUM);
        }
    }
}

void F4(vendedor A[], int T)
{
    int I;

    printf("\nVendedores con cuenta en banco\n");

    for (I = 0; I < T; I++)
    {
        if (A[I].cla == 1)
        {
            printf("\nNumero de vendedor: %d", A[I].num);
            printf("\nBanco: %s", A[I].pago.che.noba);
            printf("\nCuenta: %s\n", A[I].pago.che.nucu);
        }
    }
}
