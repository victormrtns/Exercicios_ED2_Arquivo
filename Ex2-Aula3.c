#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nome[15];
    char sobrenome[15];
    char rua[26];
    int numcasa;

}Reg;

int main(){
    FILE *in;
    char *pch;
    Reg reg;
    char aux;
    if((in = fopen("campo_var_reg_fixo.dad","rb")) == NULL)
    {
        printf("Erro na abertura do arquivo");

        return 0;
    }
   char c;
   int contador;
   while(fread(&reg,sizeof(reg),1,in)){
    pch = strtok(&reg,"\0");

    contador = strlen(pch);

    for(int i=0;i<contador;i++){
        printf("%c",pch[i]);

    }

    printf("\n");
    

   }
   

    
    fclose(in);

    
    

    /*while(fread(&reg,sizeof(Reg),1,in)){
        aux = fgetc(in);

        if(isprint(aux))
        {
        aux = (char) aux;
        printf("%c",aux);
        }

    }*/
}

int pega_registro(FILE *p_out, char *p_reg)
{
     int bytes;
     
     if (!fread(&bytes, sizeof(int), 1, p_out))
       return 0;
     else {
            fread(p_reg, bytes, 1, p_out);   
            return bytes;
          }  
}     