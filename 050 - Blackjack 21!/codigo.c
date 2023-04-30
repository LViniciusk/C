#include <stdio.h>

int main(){
    int n, soma = 0, aux = 0;
    scanf("%d", &n);
    int V[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &V[i]);
        
        if(V[i] == 11 || V[i] == 12 || V[i] == 13){
            soma +=10;
        }else if(V[i] == 1){
            aux++;
            soma += 11;
            if(soma >21){
                soma -=10;
                aux--;
            }
        }else{
            soma += V[i];
        }
        
        
    }
    for(int i = 0; i<aux;i++){
        if(soma >21){
            soma-=10;
        }else{
            break;
        }
    }
    
    printf("%d\n", soma);
    
    
    
    return 0;
}