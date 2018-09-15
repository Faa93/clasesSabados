#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Funcion que pida nombre, valide (sin numeros) y lo guarde en formato TITLE.

*/

int main()
{
char nombre[30];
int cantidad;
int i;
int is_not_valid_name;
int retorno;


printf("Ingrese su nombre:");

fgets(nombre, 30, stdin);

for(i=0; i<strlen(nombre)-1;i++)
{
    nombre[i] = tolower(nombre[i]); //paso todo lo que se escriba a minuscula

    if ((nombre[i]<'a'|| nombre[i]> 'z') && nombre[i] != ' ')
    {
        is_not_valid_name =0 ; //si el nombre es igual a alguna de la condiciones del if de arriba el valor es 0 y es incorrecto por lo que devuelve...
        printf("\n Error en formato, ingrese por favor solo letras y espacios: ");
        break;
    }
    else
    {
        if(i ==0 || nombre[i-1] ==' ')
        {
            nombre[i] = toupper(nombre[i]);
            printf(" Su nombre es: %s" ,nombre);
        }
        is_not_valid_name =0;

    }
    retorno =0;


}





}
