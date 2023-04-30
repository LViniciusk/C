#include <stdio.h>

int main(){
    
    int n, f1 = 0, f2 = 0;
    
    scanf("%d", &n);
    
    int V[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &V[i]);
        
        if (i < n/2){
            f1 += V[i];
        }else{
            f2 +=V[i];
        }
    }
    
    if(f1 == f2){
        printf("Empate");
    }else if (f1 > f2){
        printf("Jedi");
    }else{
        printf("Sith");
    }
    
    
    return 0;
}