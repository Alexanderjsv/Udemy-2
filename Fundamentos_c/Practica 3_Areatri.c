#include <stdio.h>

int	main(void){
    float base, altura, resultado;
    printf("Escriba la base\n");
    scanf("%f",&base);
    printf("Escriba la altura\n");
    scanf("%f",&altura);

    resultado=(base*altura)/2;

    printf("El resultado es %.2f\n",resultado);

    return 0;
}
