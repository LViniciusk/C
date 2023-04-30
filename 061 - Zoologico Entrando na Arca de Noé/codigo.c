#include <stdio.h>

int main(){
    int aux = 0, n, aux2 = 0;
    scanf("%d",&n);
    int V[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &V[i]);
    }
    
    for (int i = 0; i < n; i++){
        aux = 0;
        for(int j = 0; j < n; j++){
            if(V[j] == V[i]*-1 && aux == 0){
                aux++;
                aux2++;
            }
            
            
        }
    }
    
    printf("%d\n", aux2/2);
    
    
    
    return 0;
}