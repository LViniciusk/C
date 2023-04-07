#include<stdio.h>

int main()
{
    int h,m,D,M,Y;
    
    scanf("%d%d%d%d%d",&h,&m,&D,&M,&Y);
    
    h%=12;
    m%=60;
    D%=31;
    Y%=100;
    
    printf("%02d:%02d %02d/%02d/%02d\n",h,m,D,M,Y);
    
    return 0;
}