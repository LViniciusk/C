#include <stdio.h>
#include <string.h>

int contarLetra(char *frase, char letra) {
    int c = 0;
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        if (frase[i] == letra) {
            c++;
        }
    }

    return c;
}

int main() {
    char frase[100], letra;
    fgets(frase, sizeof(frase), stdin);
    scanf(" %c", &letra);

    int quant = contarLetra(frase, letra);
    printf("%d\n", quant);

    return 0;
}
