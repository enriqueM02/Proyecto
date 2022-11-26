//Funcion para poder jugar

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

    int intentos=7, puntos = 100;
    int aciertos = 0;
    char nombre[10]={"omar"};
    char frase[10];

    for(int i=0; i < 4; i++){
		frase[i] = '_';
	}
		system("cls");
		printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
		printf(" CATEGORIA: %s\n\n",nombre);
		printf(" Intentos Disponibles: %i\t\t\t\tPuntuacion: %i\n\n",6-intentos,puntos);

        printf("\n\n\n");
		for(int i=0; i < 4; i++){
			printf(" %c ",frase[i]);
		}





    return 0;
}

