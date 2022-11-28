/* Proyecto de Fundamentos de la programacion, Omar Menjivar

    Ahorcado*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tabla(){ 
    
    char aux;//Se cre
     FILE *f; //Se crea la variable del fichero 

    f = fopen("Tabla.txt", "r"); // Linea para abrir el fichero, se abre en modo "r" que es para solo leer el fichero

     system("cls");

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
}

void agregar(){
    
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
}

int main(){

int opcion;

do{
printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
	printf(" MENU\n\n");
	printf(" 1. Jugar\n");
	printf(" 2. Ver tabla de posiciones\n");
	printf(" 3. Agregar palabras\n");
    printf(" 4. Salir\n");
	printf(" Ingresa una opcion: ");
    scanf("%i", &opcion);
       
}while(opcion<1 || opcion>3);

        if (opcion==1);
	    if (opcion==2) tabla();
	    if (opcion==3) agregar();

    system ("pause");
    printf("ADIOS");

 return 0; 
}
