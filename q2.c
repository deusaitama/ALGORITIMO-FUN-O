#include <stdio.h>
#include <stdlib.h>

/*2 � Nome da fun��o: sexo( )
Fa�a uma fun��o que solicite ao usu�rio a digita��o de seu sexo, sendo �M� para masculino e �F� para
feminino. Dever� ser exibida uma mensagem de erro caso o usu�rio digite um valor que n�o corresponda a
estas op��es.
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
