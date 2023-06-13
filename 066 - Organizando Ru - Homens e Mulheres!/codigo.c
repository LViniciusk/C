#include <stdio.h>
#include <string.h>

int organizaFila(char *frase) {
    int c = 0;
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        switch(frase[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c", frase[i]);
                break;
        }
    }
    printf("\n");
    for (int i = 0; i < tam; i++) {
        switch(frase[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case ' ':
                break;
            default:
                printf("%c", frase[i]);
                
        }
    }

    return c;
}

int main() {
    char frase[100], letra;
    fgets(frase, sizeof(frase), stdin);
    
    organizaFila(frase);

    return 0;
}
