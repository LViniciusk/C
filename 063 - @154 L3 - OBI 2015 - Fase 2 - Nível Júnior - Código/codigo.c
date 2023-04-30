#include <stdio.h>


int main(){
    
    int n, aux=0;
    scanf("%d", &n);
    int V[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &V[i]);
    }
    for(int i = 0; i<n; i++){
        if(V[i] == 1 && V[i+1] == 0 && V[i+2] == 0 && i < n-2){
            aux++;
        }
    }
    printf("%d\n", aux);
    
    
    return 0;
}