#include <stdio.h>


int main(){
    
    int n, aux;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &V[i]);
    }
    
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        	
            if(V[i] > V[j]){
            	
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }
    
    for(int i = 0; i<n ; i++){
        printf("%d\n", V[i]);
        
    }
    
    return 0;
}