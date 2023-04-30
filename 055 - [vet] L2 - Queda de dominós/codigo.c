#include <stdio.h>


int main(){
    
    int n, aux=0;
    scanf("%d", &n);
    
    int V[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &V[i]);
    }
    
    for(int i = 0; i<n;i++){
        if (i != n-1 && V[i] > V[i+1]){
            aux++;
        }
    }
    
    if(aux >0){
        printf("precisa de ajuste");
    }else{
        printf("ok");
    }
    
    
    
    return 0;
}