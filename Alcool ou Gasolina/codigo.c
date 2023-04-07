#include <stdio.h>

int main(){
    
    float G,A, C;
    
    scanf("%f%f", &G, &A);
    
    C = G/A;
    
    if (C >= 1.3)
        printf("Alcool");
    else
        printf("Gasolina");
    
    return 0;
}