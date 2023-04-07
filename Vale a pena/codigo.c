#include<stdio.h>


int main()
{
    float Q,V, p;
    
    scanf("%f%f",&Q,&V);
    
    
    p = V/Q;
    
    
    
    printf("%f %f %f %f\n", p*4,p*8,p*12,p*16);
    
    return 0;
}