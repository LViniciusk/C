#include <stdio.h>

int main(){
    int n1,n2,n3, Maior, Menor, Meio;
    
    scanf("%d%d%d", &n1,&n2,&n3);
    
        
        
    //R1
    if(n1 > n2 && n1 > n3)
        printf("G ");
    else if(n1 < n2 && n1 < n3)
        printf("P ");
    else
        printf("M ");
        
    //R2
    if(n2 > n1 && n2 > n3)
        printf("G ");
    else if(n2 < n1 && n2 < n3)
        printf("P ");
    else 
        printf("M ");
    //R3
    if(n3 > n1 && n3 > n2)
        printf("G");
    else if(n3 < n1 && n3 < n2)
    printf("P");
    else 
        printf("M");
    
    
    
    
    
    
    
}