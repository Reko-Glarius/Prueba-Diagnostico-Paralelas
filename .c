#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        printf("Palabra no reconocida; por favor volver a intentarlo.");
        exit(1);
    }
    else
    {
        char letra_actual;
        int posicion_actual=0;
        
        int cantidad_de_caracteres=strlen(argv[1]);
        
        char vector_letras[cantidad_de_caracteres];
        int vector_cantidad_letras[cantidad_de_caracteres];

        printf("Palabra Ingresada: %s\n", argv[1]);
        for(int posicion_palabra=0; posicion_palabra<cantidad_de_caracteres; posicion_palabra++)
        {
            if(posicion_palabra==0)
            {
                letra_actual=argv[1][0];
                vector_letras[posicion_actual]=letra_actual;
                vector_cantidad_letras[posicion_actual]=1;
            }
            else
            {
                if(letra_actual!=argv[1][posicion_palabra])
                {
                    letra_actual=argv[1][posicion_palabra];
                    posicion_actual++;
                    vector_cantidad_letras[posicion_actual]=1;
                    vector_letras[posicion_actual]=letra_actual;
                }
                else
                {
                    vector_cantidad_letras[posicion_actual]+=1;
                }
            }
        }
        
        for(int posicion_muestral=0; posicion_muestral<strlen(vector_letras); posicion_muestral++)
        {
            printf("%c%i ", vector_letras[posicion_muestral], vector_cantidad_letras[posicion_muestral]);
        }
    }
    return 0;
}
