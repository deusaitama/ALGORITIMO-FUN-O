#include <stdio.h>
#include <stdlib.h>

/*3 � Nome da fun��o: mes( )
Fa�a uma fun��o, receba como par�metro um n�mero inteiro correspondente a um m�s do ano e exiba em tela
o m�s correspondente por extenso. Caso o n�mero recebido esteja fora do intervalo de 1 a 12, dever� ser
exibida uma mensagem informando que o n�mero � inv�lido. Exemplo: 1 = �janeiro�.
*/


void mes(int a)
{
    printf("Digite um numero correspondente a um mes:");
    scanf("%i",&a);
    if(a==1){
        printf("Janeiro");
    }
    if(a==2){
        printf("Fevereiro");
    }
    if(a==3){
        printf("Marco");
    }
    if(a==4){
        printf("Abril");
    }
    if(a==5){
        printf("Maio");
    }
    if(a==6){
        printf("Junho");
    }
    if(a==7){
        printf("Julho");
    }
    if(a==8){
        printf("Agosto");
    }
    if(a==9){
        printf("Setembro");
    }
    if(a==10){
        printf("Outubro");
    }
    if(a==11){
        printf("Novembro");
    }
    if(a==12){
        printf("Dezembro");
    }
    if(a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 && a!=8 && a!=9 && a!=10 && a!=11 && a!=12){
        printf("Numero invalido");
    }
}

int main()
{
    int b;
    mes(b);
    return 0;
}
