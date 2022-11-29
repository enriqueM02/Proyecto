//Tabla de posiciones

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int op;//variable auxiliar para el switch
    char aux;//Se crea para axuliar el while(para escribir)
    FILE *f1; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario
    FILE *f2; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario
    FILE *f3; //Se crea la variable del fichero, para mandarla a llamar cuando sea necesario
    
    do{//Bucle.de.tablas.dificultades / Este do while es para hacer un bucle del menu de las dificultades, por si el usuario mete una opcion no validad (empieza)
        system("cls");//Funcion para limpiar pantalla(Principalmente para estetica)
        printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
    printf("QUE TABLA DE POSICIONES DESEA VER:\n");
    printf("1. Tabla de dificultad facil\n");
    printf("2. Tabla de dificultad medio\n");
    printf("3. Tabla de dificultad dificil\n");
    printf(" Ingresa una opcion: ");
    scanf("%i", &op);
    }while(op<1 || op>3);//Bucle.de.tablas.dificultades / Termina

    switch (op)
    {
    case 1:
        f1 = fopen("Tabla_facil.txt", "r"); // Linea para abrir el fichero, se abre en modo "r" que es para solo leer el fichero
   

         if (f1 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
        exit(1);
        }
        system("cls");//Funcion para limpiar pantalla(Principalmente para estetica)
        printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
        while (aux != EOF)//usamos un ciclo while para imprimir en pantalla la informacion, con ayuda de una variable auxiliar
        {
        aux = fgetc(f1);//funcion para leer el fichero
        printf("%c", aux);//aqui se imprime letra por letra
         }
     printf("\n");
    
        fclose(f1);//se usa para cerrar el archivo .txt
        break;
    
    case 2:
        f2 = fopen("Tabla_medio.txt", "r"); // Linea para abrir el fichero, se abre en modo "r" que es para solo leer el fichero
   

         if (f2 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
        exit(1);
        }
        system("cls");//Funcion para limpiar pantalla(Principalmente para estetica)
        printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
        while (aux != EOF)//usamos un ciclo while para imprimir en pantalla la informacion, con ayuda de una variable auxiliar
        {
        aux = fgetc(f2);//funcion para leer el fichero
        printf("%c", aux);//aqui se imprime letra por letra
         }
     printf("\n");
    
        fclose(f2);//se usa para cerrar el archivo .txt
        break;
    
    case 3:
        f3 = fopen("Tabla_dificil.txt", "r"); // Linea para abrir el fichero, se abre en modo "r" que es para solo leer el fichero
   

         if (f3 == NULL){// Se usa un if por si el fichero no se puede abrir 
        printf("No se ha podido abrir.\n");
        exit(1);
        }
        system("cls");//Funcion para limpiar pantalla(Principalmente para estetica)
        printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
        while (aux != EOF)//usamos un ciclo while para imprimir en pantalla la informacion, con ayuda de una variable auxiliar
        {
        aux = fgetc(f3);//funcion para leer el fichero
        printf("%c", aux);//aqui se imprime letra por letra
         }
     printf("\n");
    
        fclose(f3);//se usa para cerrar el archivo .txt
        break;
    }
    
    system ("pause");
    return 0;
}





