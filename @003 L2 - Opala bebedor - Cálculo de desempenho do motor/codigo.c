#include<stdio.h>

int main()
{
    float V,T,L,D,Dp;
    
    scanf("%f%f%f",&V,&T,&L);
    
    
    T/=60;
    D=V*T;
    Dp=D/L;
    
    printf("%.2f\n", Dp);
    
    return 0;
}