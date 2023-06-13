#include <stdio.h>
#include <string.h>

int soletrar(char *frase) {
    int c = 0;
    int tam = strlen(frase);
    printf("[");
    for (int i = 0; i < tam; i++) {
        printf("%c",frase[i]);
        if(i < tam-2) printf("-");
        if(i == tam-2) printf("]");
        
    }
    

    return c;
}

int main() {
    char frase[100], letra;
    fgets(frase, sizeof(frase), stdin);
    soletrar(frase);

    return 0;
}
