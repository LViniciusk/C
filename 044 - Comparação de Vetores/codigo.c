#include <stdio.h>

int main(){
    
    int n, aux = 0;
    
    scanf("%d", &n);
    int V[n];
    for(int i = 0; i <n;i++){
        scanf("%d", &V[i]);
    }
    
    scanf("%d", &n);
    int V2[n];
    
    for(int i = 0; i <n;i++){
        scanf("%d", &V2[i]);
        
        if(V[i] != V2[i]){
            printf("Diferentes");
            aux +=1;
            break;
        }
    }
    if(aux == 0){
        printf("Iguais");
    }
    
    
    
    
    
    return 0;
}