#include <stdio.h>
#include <string.h>
#include <ctype.h>
int organizaFila(char *frase) {
    int c = 0;
    int tam = strlen(frase);


    for (int i = 0; i < tam-1; i++) {
        switch(tolower(frase[i])){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            frase[i] = 'v';
                break;
            case ' ':
            
                break;
            default:
                frase[i] = 'c';
                break;
                
        }
    }
    printf("%s", frase);
    return c;
}

int main() {
    char frase[100], letra;
    fgets(frase, sizeof(frase), stdin);
    
    organizaFila(frase);

    return 0;
}
