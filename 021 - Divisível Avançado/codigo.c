#include <stdio.h>


int main(){
    int n1;
    
    scanf("%d", &n1);
    
    if (n1 %3 == 0 && n1 %5 == 0 && n1%7 !=0)
        printf("sim");
    else
        printf("nao");
    
}