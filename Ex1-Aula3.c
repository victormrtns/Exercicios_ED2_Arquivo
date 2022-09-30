#include <stdio.h>


typedef struct{
    char nome[14];
    char sobrenome[50];
    char rua[50];
    char numcasa[5];

}reg;


int main(){
    FILE *in;
    reg reg;
    if((in = fopen("insere.bin","rb")) == NULL)
    {
        printf("Arquivo nao aberto");
        return 0;

    }

    while(fread(&reg,sizeof(reg),1,in)){
        printf("%s || %s || %s || %s \n",reg.nome,reg.sobrenome,reg.rua,reg.numcasa);

    }

    fclose(in);



}
