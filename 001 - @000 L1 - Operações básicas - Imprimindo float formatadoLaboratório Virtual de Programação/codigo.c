#include<stdio.h>

int main()
{
    int n1,n2, s, sub, m, r;
    float d;
    

    scanf("%d%d", &n1,&n2);
    
    
    
    s = n1+n2;
    sub = n1-n2;
    m = n1*n2;
    d = (float)n1/n2;
    r = n1%n2;
    printf("%d\n",s);
    printf("%d\n",sub);
    printf("%d\n",m);
    printf("%.2f\n",d);
    printf("%d\n",r);
    return 0;
}