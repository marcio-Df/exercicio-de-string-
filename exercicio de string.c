#include <stdio.h>
#include <string.h>

void inverterPalavra(char palavra[]) {
    int tamanho = strlen(palavra);
    printf("Palavra invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int main() {
    char palavra[100]; 
    printf("=== Programa para inverter palavra ===\n");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    inverterPalavra(palavra);

    return 0;
}
