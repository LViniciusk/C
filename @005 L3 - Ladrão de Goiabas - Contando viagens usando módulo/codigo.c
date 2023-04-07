#include<stdio.h>

int main()
{
    int c,b,g,m, TF,T;
    
    scanf("%d%d%d%d",&c,&b,&g,&m);
    TF = b+g+m;
    T = TF/c;
    if(TF % c !=0){
        T +=1;
    }
    
    
    
    printf("%d\n", T);
    
    return 0;
}