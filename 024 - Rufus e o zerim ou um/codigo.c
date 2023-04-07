#include <stdio.h>

int main(){
    int n1,n2,n3;
    
    scanf ("%d%d%d", &n1,&n2,&n3);
    
    //empate
    if (n1 == n2 && n2 == n3)
        printf("empate");
    //alguem ganha
    if (n1 != n2 && n2==n3)
        printf("jog1");
    if (n1 != n2 && n1==n3)
        printf("jog2");
    if (n3 != n2 && n2==n1)
        printf("jog3");
    
}