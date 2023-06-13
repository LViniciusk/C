#include <stdio.h>
#include <string.h>
#include <ctype.h>

int inverte(char *frase) {
    int c = 0;
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        if (tolower(frase[i]) == frase[i]) {
            frase[i] = toupper(frase[i]);
        }else{
            frase[i] = tolower(frase[i]);
        }
    }

    printf("%s", frase);
    return 0;
}

int main() {
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    inverte(frase);

    return 0;
}
