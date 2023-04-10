#include <stdio.h>

int main(){
    
    int fat = 1, N;
    
    scanf("%d", &N);
    
    for (int i = N; i >0; --i){
        
        fat *= i;
    }
    
    printf("%d\n", fat);
    
    
    
    
    return 0;
}