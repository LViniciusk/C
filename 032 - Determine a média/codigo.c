#include <stdio.h>

int main(){
    
    int N;
    float V, media = 0;
    
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; ++i){
        scanf("%f", &V);
        
        media += V;
        
    }
    media /=N;
    
    printf("%.2f\n", media);
    
    
    return 0;
}