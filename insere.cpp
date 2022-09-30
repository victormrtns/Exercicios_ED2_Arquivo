#include<stdio.h>

int main() {
    FILE *fd;
    
    //////////////////////////////
    struct livro {
        char isbn[14];
        char titulo[50];
        char autor[50];
        char ano[5];
    } vet[8] = {{"1111111111111", "TiT-1", "Autor-1", "1111"},
                {"2222222222222", "TiT-2", "Autor-2", "2222"},
                {"3333333333333", "TiT-3", "Autor-3", "3333"},
                {"4444444444444", "TiT-4", "Autor-4", "4444"},
                {"5555555555555", "TiT-4", "Autor-5", "5555"},
                {"6666666666666", "TiT-6", "Autor-6", "6666"},
                {"7777777777777", "TiT-7", "Autor-7", "7777"},
                {"8888888888888", "TiT-8", "Autor-8", "8888"}};
       
    fd = fopen("insere.bin", "w+b");
    fwrite(vet, sizeof(vet), 1, fd);
    fclose(fd);
    
    //////////////////////////////
	struct remove {
        char isbn[14];
    } vet_r[4] = {{"3333333333333"},
                  {"1111111111111"},
                  {"7777777777777"},
                  {"4444444444444"}};
       
    fd = fopen("remove.bin", "w+b");
    fwrite(vet_r, sizeof(vet_r), 1, fd);
    fclose(fd);
}

