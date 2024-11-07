#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
6 � Nome da fun��o: quadrado_perfeito( )
Fa�a uma fun��o para verificar se um n�mero � um quadrado perfeito. Um quadrado perfeito � um n�mero
inteiro n�o negativo que pode ser expresso como o quadrado de outro n�mero inteiro. Ex: 1, 4, 9, etc. A
fun��o dever� receber um n�mero real e, se o n�mero for um quadrado perfeito, dever� exibir em tela a
mensagem �Quadrado perfeito�, caso contr�rio dever� exibir �N�o � um quadrado perfeito�.
*/

void perfeito(int a)
{
    int raiz;
    printf("Digite um numero: ");
    scanf("%i",&a);
    raiz=sqrt(a);
    if(a==raiz*raiz){
        printf("Quadrado perfeito");
    }else
    {
        printf("Nao eh um quadrado perfeito");
    }
}

int main()
{
    int b;
    perfeito(b);
}
