#include <stdio.h>

int main(){
    
    int n, aux;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i< n; i++){
        scanf("%d", &V[i]);
    }
    
    for(int i = n-1; i >= 0; i--){
        if(i !=0){
            printf("%d ", V[i]);
        }else{
            printf("%d", V[i]);
        }
    }
    
    
    return 0;
}