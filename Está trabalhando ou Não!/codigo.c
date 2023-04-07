#include <stdio.h>

int main(){
    
    int D, H, M;
    
    scanf("%d%d%d", &D,&H,&M);
    
    if (D >=2 && D <=6){
        if(H >= 8 && (H <=11 && M <=59) || H >=14 && (H <=17 && M <=59))
            printf("SIM");
        else
            printf("NAO");
    }else if (D == 7){
        if(H >= 8 && (H <=11 && M <=59))
            printf("SIM");
        else
            printf("NAO");
    }else
        printf("NAO");
}