#include<stdio.h>

int main(){
    int n, aprobados=0,suspensos=0;
    float nota;

    printf("Introduce el numero de alumnos\n");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);

        if(nota>=5){
            aprobados++;
        }
        else{
         suspensos++;
        }
    }

    printf("Alumnos aprobados: %d y alumnos suspensos es: %d\n",aprobados,suspensos);
}