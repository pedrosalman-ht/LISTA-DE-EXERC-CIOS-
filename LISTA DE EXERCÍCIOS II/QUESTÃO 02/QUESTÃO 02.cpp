#include <stdio.h>

	int main() {
		int N, i, soma = 0;

    	printf("Digite um numero: ");
    	scanf("%d", &N);

    for(i = 1; i <= N; i++) {
    	
        soma += (i * i);
    }	

    printf("Resultado: %d", soma);

    return 0;
}