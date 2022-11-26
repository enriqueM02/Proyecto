/* Proyecto de Fundamentos de la programacion, Omar Menjivar

    Ahorcado*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int opcion;

do{
printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
	printf(" MENU\n\n");
	printf(" 1. Jugar\n");
	printf(" 2. Ver tabla de posiciones\n");
	printf(" 3. Agregar palabras\n");
	printf(" Ingresa una opcion: ");
    scanf("%i", &opcion);
}while(opcion<1 || opcion>3);

switch (opcion)
{

//Opcion para jugar
case 1:
    system("cls");
    printf("juega\n");
    system ("pause");
    break;

//Opcion para tabla de puntuaciones
case 2: 
     printf("tabla");
    break;

//Opcion para agregar palabras
case 3: 
     printf("agrega");
    break;
}


 return 0; 
}
