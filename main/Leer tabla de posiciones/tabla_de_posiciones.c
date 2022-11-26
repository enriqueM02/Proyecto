//Tabla de posiciones

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char aux;//Se cre
     FILE *f; //Se crea la variable del fichero 

    f = fopen("Tabla.txt", "r"); // Linea para abrir el fichero, se abre en modo "r" que es para solo leer el fichero

    if (f == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
        exit(1);
    }
    while (aux != EOF)
    {
        aux = fgetc(f);
        printf("%c", aux);
    }
    printf("\n");
    
    fclose(f);

    

    system ("pause");
    return 0;
}





