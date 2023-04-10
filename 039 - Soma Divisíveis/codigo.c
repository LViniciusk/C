#include <stdio.h>


int main(){
    
    int soma = 0, N, c = 0;
    
    scanf("%d", &N);
    
    for(int i = 0; c< N; ++i){
        
        if (i%3==0 && i%7!=0){
            soma += i;
            c+=1;
        }
    }
    
    printf("%d\n", soma);
    
    
    
    return 0;
}