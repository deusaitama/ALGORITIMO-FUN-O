#include <stdio.h>
#include <stdlib.h>

/*3 – Nome da função: mes( )
Faça uma função, receba como parâmetro um número inteiro correspondente a um mês do ano e exiba em tela
o mês correspondente por extenso. Caso o número recebido esteja fora do intervalo de 1 a 12, deverá ser
exibida uma mensagem informando que o número é inválido. Exemplo: 1 = “janeiro”.
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
