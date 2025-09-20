#include <stdio.h>

int main() {
    int secreto=64;
    int tentativa;

    do {
        printf("Digite um numero e tente acertar o numero secreto: ");
        scanf("%d",&tentativa);

        if(tentativa<secreto){
            printf("Maior\n");
        }
        else if(tentativa>secreto){
            printf("Menor\n");
        }
    } while(tentativa!=secreto);

    printf("Acertou!");

    return 0;
}
