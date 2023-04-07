#include<stdio.h>
#include<math.h>

int main()
{
    float xA,xB,yA,yB, D;
    
    scanf("%f%f",&xA,&yA);
    scanf("%f%f",&xB,&yB);
    
    
    D=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
    
    
    
    printf("%.2f\n",D);
    
    return 0;
}