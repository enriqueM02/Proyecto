//funcion "agregar palabra"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int op, opcion;
    char palabra_nueva1[50]; //Variable donde se guarda la palabra
    char palabra_nueva2[50]; //Variable donde se guarda la palabra
    char palabra_nueva3[50]; //Variable donde se guarda la palabra

    FILE *f1; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario
    FILE *f2; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario
    FILE *f3; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario

    do{ //Bucle.de.fichero / Este do while funciona para hacer un bucle por si el usuario desea introducir una nueva palabra en algun fichero

    do{ //Bucle.de.dificultades / Este do while es para hacer un bucle del menu de las dificultades, por si el usuario mete una opcion no validad (empieza)
        system("cls");//Funcion para limpiar pantalla(Principalmente para estetica)
        //MENU DE DIFICULTADES
        printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
    printf("EN QUE TABLA DESEA AGREGAR UNA NUEVA PALABRA:\n");
    printf("1. Tabla de dificultad facil\n");
    printf("2. Tabla de dificultad medio\n");
    printf("3. Tabla de dificultad dificil\n");
    printf(" Ingresa una opcion: ");
    scanf("%i", &op);
    }while(op<1 || op>3);//Bucle.de.dificultades / Termina el do while de menu de dificultades


    switch (op)
    {

    case 1:
         f1 = fopen("Palabras_facil", "a"); // Linea para abrir el fichero, se abre en modo "a" que es para añadir datos al final

        if (f1 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
            exit(1);
         }

    
          //Este bloque de comandos es para pedir la nueva palabra y guardarlas en una varible
         system("cls");
         printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
         printf("Introduciendo en Palabras_facil.\n");
         printf(" Introduce la nueva palabra: ");
        scanf("%s", palabra_nueva1);

        //Mediante "fprintf" y la variable donde hemos almacenado la palabra nueva, podemos escrirla en el fichero
         fprintf(f1,"%s\n",palabra_nueva1);

        fclose(f1);//Se cierra el fichero 

        //Mediante un sistema de menu preguntamos al usuario si desea agregar otra palabra 
          system("cls");
          printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
          printf("La palabra %s, ha sido agregada con exito.\n", palabra_nueva1);
          printf("Desea agregar otra palabra.\n");
          printf(" 1. Si\n 2. No\n");
          printf("Opcion: ");
          scanf("%i", &opcion);
        system ("pause");
    break;

    case 2:
         f2 = fopen("Palabras_medio", "a"); // Linea para abrir el fichero, se abre en modo "a" que es para añadir datos al final

        if (f2 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
            exit(1);
         }

    
          //Este bloque de comandos es para pedir la nueva palabra y guardarlas en una varible
         system("cls");
         printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
         printf("Introduciendo en Palabras_facil.\n");
         printf(" Introduce la nueva palabra: ");
        scanf("%s", palabra_nueva2);

        //Mediante "fprintf" y la variable donde hemos almacenado la palabra nueva, podemos escrirla en el fichero
         fprintf(f2,"%s\n",palabra_nueva2);

        fclose(f2);//Se cierra el fichero 

        //Mediante un sistema de menu preguntamos al usuario si desea agregar otra palabra 
          system("cls");
          printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
          printf("La palabra %s, ha sido agregada con exito.\n", palabra_nueva2);
          printf("Desea agregar otra palabra.\n");
          printf(" 1. Si\n 2. No\n");
          printf("Opcion: ");
          scanf("%i", &opcion);
        system ("pause");
    break;

    case 3:
         f3 = fopen("Palabras_dificil", "a"); // Linea para abrir el fichero, se abre en modo "a" que es para añadir datos al final

        if (f3 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
            exit(1);
         }

    
          //Este bloque de comandos es para pedir la nueva palabra y guardarlas en una varible
         system("cls");
         printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
         printf("Introduciendo en Palabras_dificil.\n");
         printf(" Introduce la nueva palabra: ");
        scanf("%s", palabra_nueva3);

        //Mediante "fprintf" y la variable donde hemos almacenado la palabra nueva, podemos escrirla en el fichero
         fprintf(f3,"%s\n",palabra_nueva3);

        fclose(f3);//Se cierra el fichero 

        //Mediante un sistema de menu preguntamos al usuario si desea agregar otra palabra 
          system("cls");
          printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
          printf("La palabra %s, ha sido agregada con exito.\n", palabra_nueva3);
          printf("Desea agregar otra palabra.\n");
          printf(" 1. Si\n 2. No\n");
          printf("Opcion: ");
          scanf("%i", &opcion);
        system ("pause");
    break;
    }
    }while(opcion == 1);//Bucle.de.fichero / Aqui termina el bucle 
    
   
    return 0;
}