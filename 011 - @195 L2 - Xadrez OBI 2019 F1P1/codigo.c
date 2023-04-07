#include<stdio.h>

int main()
{
    int L,C, R;
    
    scanf("%d%d",&L,&C);
    
    if(L%2==0){
        if(C%2==0){
            R=1;
        }else{
            R = 0;
        }
    }else{
        if(C%2==0){
            R=0;
        }else{
            R = 1;
        }
    }
    
    
    printf("%d\n", R);
    
    
    return 0;
}