#include <stdio.h>
 
int main()
{
    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};
    int max = vector[0];
    int min = vector[0];

    for (int i=1;i<10;i++){
        if (vector[i] > max){
            max = vector[i];
        }

        if (vector[i] < min){
            min = vector[i];
        }
    }

    printf("Valor maximo: %d\nValor minimo: %d",max,min);
}