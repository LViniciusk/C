#include <stdio.h>

int main (){
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    
    if (n1 % n2 == 0)
        printf("sim\n");
    if (n1 % n2 != 0)
        printf("nao\n");
        
        return 0;
}