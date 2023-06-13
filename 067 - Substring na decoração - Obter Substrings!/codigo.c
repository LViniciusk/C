#include <stdio.h>
#include <string.h>

int xiporimpoulagamer(char *frase, int inicio, int fim) {
    int c = 0;
    int tam = strlen(frase);
    char resp;
    for (int i = inicio; i <inicio+fim; i++) {
        if(i == inicio) resp = frase[i];
        else resp += frase[i];
        printf("%c", frase[i]);
    }


}

int main() {
    char frase[100];
    int inicio, fim;
    fgets(frase, sizeof(frase), stdin);
    scanf("%d %d", &inicio, &fim);
    
    xiporimpoulagamer(frase, inicio, fim);

    return 0;
}
