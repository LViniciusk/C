#include <stdio.h>


int main(){
    
    int n = 5;
    int V[n], maior, menor, soma;
    
    for(int i = 0; i<n; i++){
        
        scanf("%d", &V[i]);
        if (i == 0){
            maior = V[i];
            menor = V[i];
        }
        if (V[i] > maior){
            maior = V[i];
        }if (V[i] < menor){
            menor = V[i];
        }
    }
    
    soma = maior + menor;
    
    printf("%d\n", soma);
    
    
    
    return 0;
}