#include <stdio.h>


int main (){
    
    int N, V, Vc = 0, soma = 0;
    
    scanf("%d", &N);
    
    for (int i = N; i >0; --i){
        //for 1
        Vc = 0;
        V = 0;
        for (int c = i; c > 0; --c){
            //for 2
            if (i%c ==0){
                Vc +=1;
            }
            
        
        }
    
        if(Vc == 2){
            V = i;
            
            soma += V;
        }
        
    }
    
    
    
    
    printf("%d\n", soma);
        
        
        
        
        
        return 0;
}
    
    
    
    
