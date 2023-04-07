#include<stdio.h>

int main()
{
    float n1;
    
    scanf("%f",&n1);
    
    if(n1<0)
        n1*=-1;
   
    printf("%f\n", n1);
    
    
    return 0;
}