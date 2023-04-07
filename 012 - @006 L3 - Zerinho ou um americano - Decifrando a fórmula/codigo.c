#include<stdio.h>

int main()
{
    int n1,n2,n3,n4, C,T;
    
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    
    T = n1+n2+n3+n4;
    C = T%4;
    
    if(T == 0){
        printf("nenhum\n");
    }else{
        if(C==0)
            printf("jog4\n");
        if(C==1)
            printf("jog1\n");
        if(C==2)
            printf("jog2\n");
        if(C==3)
            printf("jog3\n");
            
    }
    
    
    
    return 0;
}