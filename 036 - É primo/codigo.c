#include <stdio.h>


int main(){
    
    int N, V = 0;
    
    scanf("%d", &N);
    
    for(int i = N; i >0; --i){
        if (N%i ==0){
            V +=1;
        }
    }
    if(V == 2)
        printf("sim");
    else
        printf("nao");
    
    
    
    return 0;
}