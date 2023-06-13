#include <stdio.h>
#include <string.h>

int gagueira(char *frase) {
    int aux = 0, aux2, inicio = 0, final;
    int tam = strlen(frase);
    for (int i = 0; i <= tam; i++) {
        printf("%c", frase[i]);
        if(frase[i] == ' ' || frase[i] == '\0'){
            final = i;
            for(int j = inicio+1; j <= final; j++){
                if (j == inicio +1 && aux2 == 0){
                    aux2 = 1;j--;
                } 
                printf("%c", frase[j]);      
                inicio = j;
            }
        }
        
        //for(int j = final; j > tam-1; j++) printf("%c", frase[j]);
        
    }
    
    

}

int main() {
    char frase[100];
    fgets(frase, sizeof(frase), stdin);
    gagueira(frase);

    return 0;
}
