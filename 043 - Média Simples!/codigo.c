#include <stdio.h>


int main (){
    int n;
    scanf("%d", &n);
    float V[n], media = 0;
    for(int i = 0; i < n; i++){
        scanf("%f", &V[i]);
        
        media += V[i];
    }
    
    printf("%.2f\n", media/n);
    
    
    
    
    return 0;
}