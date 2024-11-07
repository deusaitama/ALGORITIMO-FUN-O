#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
6 – Nome da função: quadrado_perfeito( )
Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número
inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex: 1, 4, 9, etc. A
função deverá receber um número real e, se o número for um quadrado perfeito, deverá exibir em tela a
mensagem “Quadrado perfeito”, caso contrário deverá exibir “Não é um quadrado perfeito”.
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
