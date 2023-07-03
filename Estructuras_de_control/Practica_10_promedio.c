#include <stdio.h>

int main(){
    int suma=0,cont=0,num=-1;

    while (num != 0){
        printf("Introduce un numero\n");
        scanf("%d",&num);
        cont++;
        suma += num;
    }

    float promedio = suma/cont;
    printf("La suma de todos los numeros es: %d y el promedio es: %.2f", suma,promedio);

}