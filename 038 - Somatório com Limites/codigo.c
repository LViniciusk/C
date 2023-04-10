#include <stdio.h>

int main(){
    
    int soma = 0, N;
    
    scanf("%d", &N);
    
    if (N <3){
        soma = 0;
    }else{
        for(int i = 3; i <= N; ++i){
            soma +=i +2;
        }
        
    }
    printf("%d\n", soma);
    
    
    
    return 0;
}