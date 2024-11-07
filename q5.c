#include <stdio.h>
#include <stdlib.h>


/*
5 – Nome da função: volume_cilindro( )
Faça uma função que receba como parâmetros a altura e o raio de um cilindro circular e exiba em tela o
volume do cilindro.
*/


float volume_cilindro(float raio,float altura){
    return (3.14*pow(raio,2))*altura;
}

int main()
{
    float raio1,altura2;
    printf("Digite o raio e a altura do cilindro\n");
    scanf("%f%f",&raio1,&altura2);
    printf("O volume do cilindro eh: %f",volume_cilindro(raio1,altura2));
}
