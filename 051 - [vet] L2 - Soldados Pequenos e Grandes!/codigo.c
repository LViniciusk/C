#include <stdio.h>

int main(){
    
    
    int n;
    
    scanf("%d", &n);
    
    double V[n], media = 0;
    
    for(int i = 0; i<n;i++){
        scanf("%lf", &V[i]);
        
        media += V[i];
    }
    media/=n;
    printf("%.2lf\n", media);
    for(int i = 0; i<n;i++){
        if(i == n-1){
            if(V[i] < media)        {
            printf("P");
            }else if(V[i] == media){
                printf("M");
            }else{
                printf("G");
            }
        }else if(V[i] < media)        {
            printf("P ");
        }else if(V[i] == media){
            printf("M ");
        }else{
            printf("G ");
        }
    }
    

    
    
    
    return 0;
}