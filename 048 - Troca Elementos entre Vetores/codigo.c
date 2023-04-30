#include <stdio.h>

int main(){
    
    int n, aux;
    scanf("%d", &n);
    
    int V[n], V2[n];
    
    for(int i = 0; i<n;i++){
        scanf("%d", &V[i]);
    }
    for(int i = 0; i<n;i++){
        scanf("%d", &V2[i]);
        aux = V[i];
        V[i] = V2[i];
        V2[i] = aux;
        printf("%d ", V[i]);
    }
    printf("\n");
    for(int i = 0; i<n; i++){
        printf("%d ", V2[i]);
    }
    
    
    
    
    
    
    return 0;
}