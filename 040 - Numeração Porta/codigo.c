#include <stdio.h>

int main(){
    
    int a = 1, b = 1, N, soma;
    
    scanf("%d", &N);
    for (int i = 3; i <= N; ++i){                                        
       soma = a + b;                    
       a = b;                           
       b = soma;                           
     }       
     printf("%d", b);

    
    
    return 0;
}

