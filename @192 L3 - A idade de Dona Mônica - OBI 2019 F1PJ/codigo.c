#include <stdio.h>

int main(){
    int M, A, B, D, MV;
    
    scanf("%d%d%d", &M,&A,&B);
    
    D = M - (A+B);
    MV = A;
    
    if (B > MV)
        MV = B;
    if (D>MV)
        MV = D;
    
    

    
    printf("%d\n", MV);
    
}