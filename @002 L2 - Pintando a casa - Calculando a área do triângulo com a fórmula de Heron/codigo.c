#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c, P, A;
    
    scanf("%f%f%f",&a,&b,&c);
    
    
    
    
    P = (a+b+c)/2;
    A = sqrt(P*(P-a)*(P-b)*(P-c));
    
    printf("%.2f\n", A);
    
    return 0;
}