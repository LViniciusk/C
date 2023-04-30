#include <stdio.h>

int main(){
    
    
    int n;
    scanf("%d", &n);
    
    double V[n], med, aux;
    for(int i = 0; i<n;i++){
        scanf("%lf", &V[i]);
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
    
    
    for(int i = 0; i<n;i++){
        if(n%2 == 0){
            med = (V[(n-1)/2] + V[((n-1)/2)+1])/2;
        }else{
            med = V[n/2];
        }
    }
    
    
    printf("%.2lf\n", med);
    
    
    return 0;
}