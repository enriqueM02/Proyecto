#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int cont = 0; 
    char aux;
    char temp[50]; 
    char palabras[20][10];
    char palabra[10];

    FILE *f;
    
    f = fopen("recorrer.txt", "r");

    if(f == NULL){
        printf("Np se ha podido abiri el fichero\n");
        exit(1);
    }

    while (!feof(f))
    {
        fgets(temp,50,f);
        cont++;
    }

    rewind(f); 

    for (int i = 0;!feof(f) ; i++)
    {
        vaciar(char temp);

        aux = '0';
        for (int j= 0; aux != '\n' ; j++)
        {
            aux = fgetc(f);
            if (aux != '\n')
            {
                temp[j] = aux;
            }
            
        }
        
    }
for (int i = 0; i < 10; i++)
{
    printf("%s", temp[i]);
}

    




    void vaciar(char temp[]){
        int i;

        for (i = 0; i < 50; i++)
        {
            temp[i] = '\0';
        }
    }

   
    
    








    







    return 0;
}