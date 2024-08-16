#include "scanner.h"

char caracter;
int cont;
  
struct Token get_token()
{
    token.tipo=0;
    token.lexema[0]='\0';
    caracter=getchar();

    while(caracter != EOF)
    {
        if(caracter == ',')
        {
             token.tipo=SEP;    
             token.lexema[0]=',';
             token.lexema[1]='\0';
             return token;
        }
        else
        {
            if(!isspace(caracter))
            {
                cont=0;
                while((caracter!=',') && !isspace(caracter) && caracter != EOF)
                {  
                    token.lexema[cont]=caracter;
                    cont++;
                    caracter=getchar();
                }
                token.lexema[cont]='\0';
                ungetc(caracter,stdin);
                token.tipo=CAD;
                return token;
            }
        }
    caracter=getchar();   
    }
    
token.tipo=FDT;
token.lexema[0]='\0';
return token;
}