#include <stdio.h>


int main(){
    
    int N,B=1;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; ++i){
        
        B *=2;
    }
    
    printf("%d\n", B);
    
    
    
    
    return 0;
}