#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *out;
     char vet[20] = "Pega teu zap";
        printf("%s",vet);

    if((out = fopen("fwrite.bin","w+b")) == NULL){
        printf("Erro na abertura do arquivo");

        return 0;
    }

    //Essa função retorna um inteiro com a quantidade de posições gravadas

    //fwrite(vet,sizeof(char),20,out);
    fwrite(vet,sizeof(vet),1,out);

    fclose(out);
    


}