#include <stdio.h>
#include <string.h>

int inverteTexto(char *frase) {
    int c = 0;
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        int aux = frase[i];
        frase[i] = frase[tam-1-i];
        frase[tam-1-i] = aux;
        printf("%s", frase);    
    }
    

}

int main() {
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    inverteTexto(frase);

    return 0;
}
