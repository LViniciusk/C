#include <stdio.h>
#include <math.h>

int main(){
    
    int x,y, aux;
    
    scanf("%d %d", &x,&y);
    aux = x;
    if(y == 0){
        x = 1;
    }else{ 
        for (int i = 2; i <= y; ++i){
            x *=aux;
        }
    }
    printf("%d\n", x);
    
    //printf("%.0lf\n", pow(x,y));  <-- mt melhor
    
    
    
    
    
    
    return 0;
}