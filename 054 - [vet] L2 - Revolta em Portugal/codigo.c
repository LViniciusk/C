#include <stdio.h>

int main(){
    
    int n, r = 0, s = 0;
    
    scanf("%d", &n);
    
    int V[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &V[i]);
        if(V[i]%2 !=0){
            s+=V[i];
        }else{
            r +=V[i];
        }
    }
    
    if(r == s){
        printf("empate");
    }else if(r > s){
        printf("rebeldes");
    }else{
        printf("soldados");
    }
    
    
    
    return 0;
}