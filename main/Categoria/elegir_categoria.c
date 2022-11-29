
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
int categoria, dificultad;
char jugador[20];
	
		system("cls");
	printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
    printf("Ingrese su Nickname: ");
    scanf("%s", jugador);

	do{
		system("cls");
		printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
		printf(" DIFICULTAD\n\n");
		printf(" 1. Facil\n");
		printf(" 2. Medio\n");
		printf(" 3. Dificil\n");
		printf(" Ingresa una opcion: ");
		scanf("%i",&dificultad);		
	}while(dificultad<1 || dificultad>3);

	do{
		system("cls");
		printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
		printf(" CATEGORIAS\n\n");
		printf(" 1. Frutas\n");
		printf(" 2. Animales\n");
		printf(" Ingresa una opcion: ");
		scanf("%i",&categoria);		
	}while(categoria<1 || categoria>2);

    
    return 0;
}

      

    