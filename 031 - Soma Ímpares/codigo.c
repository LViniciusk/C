#include <stdio.h>


int main(){
    
    int i, soma = 0, inf, sup, dif;
    
    scanf("%d %d", &inf, &sup);
    
    dif = sup-inf;
    for(i = 0; i <= dif; ++i){
        if(inf %2 !=0){
            soma +=inf;
        }
        inf++;
    }
    printf("%d\n", soma);
    
    
    
    return 0;
}