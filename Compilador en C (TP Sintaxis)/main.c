#include "scanner.h"

int main()
{	
    token=get_token();
    while(token.tipo != FDT)
    {   
        if(token.tipo == CAD)
        {
            printf("Cadena: %s \n",token.lexema);
        }
        if(token.tipo == SEP)
        {
            printf("Separador: %s \n",token.lexema);
        }
    token=get_token();
    }
printf("Fin de Texto:"); 
return 0;
}
