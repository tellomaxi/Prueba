#include <stdio.h>
#include <stdlib.h>

#define LIMITE_ARRAY 3

int main()
{
    int numero[LIMITE_ARRAY];
    int numeroMax;
    int numeroMin;
    int i;

    for(i=0; i<3 ; i++)
    {
        printf("\nNumero %d:" , i+1);
        while(scanf("%d",&numero[i]) !=1)
        {
            printf("\Error - Numero %d:" , i+1);
            __fpurge(stdin);
        }
        if(i==0)
        {
            numeroMax = numero[i];
            numeroMin = numero[i];
        }
        else if(numero[i] > numeroMax)
        {
            numeroMax = numero[i];
        }
        else if(numero[i] < numeroMin)
        {
            numeroMin = numero[i];
        }

    }
    printf("Max: %d  - \nMin: %d" , numeroMax , numeroMin);

    for(i=0; i<3; i++)
    {
        if(numero[i] > numeroMin && numero[i]<numeroMax)
        {
            printf("\nEl del medio es: %d" , numero[i]);
            break;
        }
    }


    return 0;
}
