//funcion "agregar palabra"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int opcion;
    char palabra_nueva[50]; //Variable donde se guarda la palabra

    FILE *f; //Se crea la variable del fichero 

    f = fopen("Frutas.txt", "a"); // Linea para abrir el fichero, se abre en modo "a" que es para añadir datos al final

    if (f == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
        exit(1);
    }

    do
    {
    //Este bloque de comandos es para pedir la nueva palabra y guardarlas en una varible
    printf("introduce la nueva palabra: ");
    scanf("%s", palabra_nueva);

    //Mediante "fprintf" y la variable donde hemos almacenado la palabra nueva, podemos escrirla en el fichero
    fprintf(f,"%s\n",palabra_nueva);

        //Mediante un sistema de menu preguntamos al usuario si desea agregar otra palabra 
          system("cls");
          printf("La palabra %s, ha sido agregada con exito.\n", palabra_nueva);
          printf("Desea agregar otra palabra.\n");
          printf(" 1. Si\n 2. No\n");
          printf("Opcion: ");
          scanf("%i", &opcion);
    } while (opcion == 1);
    
    system ("pause");

    
 
    fclose(f);//Se cierra el fichero 






    return 0;
}