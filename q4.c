#include <stdio.h>
#include <stdlib.h>

/*
4 � Nome da fun��o: soma4( )
Fa�a uma fun��o que receba quatro n�meros reais como par�metro e exiba em tela o somat�rio destes
n�meros.
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


