#include <stdio.h>

int main(){
    
    int n1,n2, R;
    char OP;
    float Div;
    
    
    scanf ("%d%d %c", &n1, &n2, &OP);
    
    if (OP == '+'){
        R = n1 + n2;
        printf("%d\n", R);
    }else if (OP == '-'){
        R = n1 - n2;
        printf("%d\n", R);
    }else if (OP == '*'){
        R = n1 * n2;
        printf("%d\n", R);
    }else if (OP == '/' && n2 !=0){
        Div = (float)n1 / n2;
        printf("%f\n", Div);
    }else
        printf("invalida\n");
        
    
}