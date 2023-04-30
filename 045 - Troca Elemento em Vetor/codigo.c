#include <stdio.h>

int main(){
    
    int n, aux, n1,n2;
    
    scanf("%d", &n);
    int V[n];
    for(int i = 0; i <n;i++){
        scanf("%d", &V[i]);
    }
    
    scanf("%d%d", &n1, &n2);
    
    aux = V[n1];
    V[n1] = V[n2];
    V[n2] = aux;
    
    for(int i = 0; i<n; i++){
        printf("%d ", V[i]);
    }
    
    
    
    
    
    
    return 0;
}