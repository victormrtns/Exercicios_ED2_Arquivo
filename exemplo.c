#include <stdio.h>
#include <stdlib.h>

char c;
int incrementar (int *num);
int main(){
    static int k = 5;
    int *a = (int*) malloc(sizeof(int));
    *a = 1;
    c = 'r';
    printf("%c:  %d",c,incrementar(a));
}

 int incrementar (int *num){
   (*num)++;
   if(*num == 3){
    return 2;
   }


}