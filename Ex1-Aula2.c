#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    FILE *out;
    FILE *in;
    
    if((in = fopen("fwrite.bin","rb")) == NULL){
        printf("Erro na abertura do arquivo");
        
        return 0;
    }
     if((out = fopen("Ex1Aula2.txt","w+")) == NULL){
        printf("Erro na abertura do arquivo");
        
        return 0;
    }

    char ch;
    ch = getc(in);
    char a;

    if(isprint(ch))
    {
        a = (char) ch;
        fputc(a,out);
        printf("%c",ch);
    }

    while((ch = getc(in))!=EOF){
        if(isprint(ch))
        {
        a = (char) ch;
        fputc(a,out);
        }

        printf("%c",ch);
        
    }

    fclose(in);
    fclose(out);
    
    
    return 0;    
}