#include <stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);
    
    if (N > 0)
        printf("positivo\n");
    else if (N == 0)
        printf("nulo\n");
    else
        printf("negativo\n");
}