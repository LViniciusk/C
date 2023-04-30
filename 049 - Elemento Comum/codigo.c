#include <stdio.h>


int main(){
    
    int n1,n2, aux = 0;
    
    scanf("%d", &n1);
    int V[n1];
    for(int i = 0; i<n1;i++){
        scanf("%d", &V[i]);
    }
    
    
    scanf("%d", &n2);
    int V2[n2];
    for(int i = 0; i<n2;i++){
        scanf("%d", &V2[i]);
        for(int c = 0; c<n1; c++){
            if (V[c] == V2[i]){
                aux++;
            }
        }
    }
    
    if(aux >0){
        printf("Existe");
    }else{
        printf("Nao existe");
    }
    
    
    
    
    return 0;
}