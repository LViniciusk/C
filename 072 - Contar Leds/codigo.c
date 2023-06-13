#include <stdio.h>
#include <string.h>

int contaLed(char *frase) {
    int tam = strlen(frase);
    int soma = 0, aux = 0;

    for (int i = 0; i < tam; i++) {
        switch(frase[i]){
            case '1':
                aux += 2;
                break;
            case '2':
            case '3':
            case '5':
                aux += 5;
                break;
            case '4':
                aux += 4;
                break;
            case '6':
            case '9':
            case '0':
                aux += 6;
                break;
            case '8':
                aux += 7;
                break;
            case '7':
                aux += 3;
                break;
            default:
                aux += 0;
                break;
                
        }
        soma +=aux;
        //printf("somei %d \n", aux);
    }
    return aux;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    n++;
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    
    int out[n];
    out[0] = contaLed(frase);
    for(int i = 1; i <n; i++){
        fgets(frase, sizeof(frase), stdin);
        out[i] = contaLed(frase);
    }
    
    for(int i = 1; i<n; i++){
        printf("%d leds\n", out[i]);
    }
    

    return 0;
}
