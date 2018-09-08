#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{

void insertionSort (int array[], int size)

int i, j, auxiliar;

for(i = 1; i < size; i++){
    auxiliar = array[i];
    j = i;
    while(j > 0 && auxiliar < array[j - 1]){
        array[j]=array[j-1];
        j--;
    }
    array[j]=auxiliar;
}

}
//ARRAY DE POSICIONAMIENTO, VA ACOMODANDO LOS NUMEROS DE MENOR A MAYOR

//DEMIANDES@GMAIL.COM
//DEMIANDES@GMAIL.COM
//PROFESOR DE LOS SABADOS
