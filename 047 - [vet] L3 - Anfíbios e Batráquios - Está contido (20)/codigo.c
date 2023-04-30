#include <stdio.h>


int main(){
    
    int n1,n2,aux=0, V[50], V2[50];
    
    scanf("%d", &n1);
    for (int i = 0; i<n1; i++){
        scanf("%d", &V[i]);    
    }
    
    scanf("%d", &n2);
    for (int i = 0; i<n2; i++){
        scanf("%d", &V2[i]);    
        int aux2 = 0;
        for(int c = 0; c < n1; c++){
            if (V[c] == V2[i] && aux2 == 0){
                aux++;
                aux2 = 1;
            }
        }
    }
    
    if(aux == n1){
        printf("sim");
    }else{
        printf("nao");
    }
    
    
    
    
    return 0;
}