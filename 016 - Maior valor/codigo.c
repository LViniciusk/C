#include <stdio.h>


int main (){
    int n1,n2,n3,n4, M;
    
    scanf("%d%d%d%d", &n1,&n2,&n3,&n4);
    
    
    M = n1;
    
    if (n2 > M)
        M = n2;
    if (n3 > M)
        M = n3;
    if (n4 > M)
        M = n4;
        
    printf("%d\n", M);
    
    
}