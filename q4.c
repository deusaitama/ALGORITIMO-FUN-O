#include <stdio.h>
#include <stdlib.h>

/*
4 – Nome da função: soma4( )
Faça uma função que receba quatro números reais como parâmetro e exiba em tela o somatório destes
números.
*/

int soma4(int a, int b, int c, int d)
{
    return a+b+c+d;
}

int main()
{
    int e,f,g,h;
    printf("Digite 4 numeros\n");
    scanf("%i%i%i%i",&e,&f,&g,&h);
    printf("A soma dos numeros digitados eh: %i\n",soma4(e,f,g,h));
    return 0;
}


