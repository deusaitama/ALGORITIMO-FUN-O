#include <stdio.h>
#include <stdlib.h>

/*2 – Nome da função: sexo( )
Faça uma função que solicite ao usuário a digitação de seu sexo, sendo ‘M’ para masculino e ‘F’ para
feminino. Deverá ser exibida uma mensagem de erro caso o usuário digite um valor que não corresponda a
estas opções.
*/

void sexo(char a)
{
    printf("Digite o sexo:");
    scanf("%c",&a);
    if(a!='F' && a!='M'){
        printf("Erro");
    }
}

int main()
{
    char c;
    sexo(c);
    return 0;
}
