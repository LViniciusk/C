#include <stdio.h>

int main (){
    
    int n1,n2,n3, R = 1;
    
    scanf("%d%d%d", &n1,&n2,&n3);
    
    if (n1 == n2)
        R+=1;
    if (n2 == n3)
        R+=1;
    if (n3 == n1)
        R+=1;
    if (R == 4)
        R -= 1;
        
    printf("%d\n", R);
    
}