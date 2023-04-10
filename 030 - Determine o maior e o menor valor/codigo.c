#include <stdio.h>


int main(){
    
    int i, N, V, Maior=-99999, Menor=999999;
    
    scanf("%d", &N);
    
    for(i = 0; i<N; ++i){
        scanf("%d", &V);
        
        if(V >= Maior){
            Maior = V;
        }
        if(V <=Menor){
            Menor = V;
        }
        
    }
    printf("%d %d\n",Maior, Menor);
    
    return 0;
}