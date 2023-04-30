#include <stdio.h>

int main(){
    char OP1,OP2;
    
    scanf("%c %c", &OP1, &OP2);
    
    if(OP1 == OP2)
        printf("empate");
    
    if (OP1 == 'P'){
            
        //Vence
        if (OP2 == 'R')
            printf("jog1");
        if (OP2 == 'K')
            printf("jog1");
            
        //perde
        if (OP2 == 'S')
            printf("jog2");
        if (OP2 == 'L')
            printf("jog2");
    }else if (OP1 == 'S'){
            
        //Vence
        if (OP2 == 'P')
            printf("jog1");
        if (OP2 == 'L')
            printf("jog1");
            
        //perde
        if (OP2 == 'R')
            printf("jog2");
        if (OP2 == 'K')
            printf("jog2");
    }else if (OP1 == 'R'){
            
        //Vence
        if (OP2 == 'S')
            printf("jog1");
        if (OP2 == 'L')
            printf("jog1");
            
        //perde
        if (OP2 == 'P')
            printf("jog2");
        if (OP2 == 'K')
            printf("jog2");
    }else if (OP1 == 'K'){
            
        //Vence
        if (OP2 == 'S')
            printf("jog1");
        if (OP2 == 'R')
            printf("jog1");
            
        //perde
        if (OP2 == 'P')
            printf("jog2");
        if (OP2 == 'L')
            printf("jog2");
    }else if (OP1 == 'L'){
            
        //Vence
        if (OP2 == 'K')
            printf("jog1");
        if (OP2 == 'P')
            printf("jog1");
            
        //perde
        if (OP2 == 'R')
            printf("jog2");
        if (OP2 == 'S')
            printf("jog2");
    }
    
    
    
    return 0;
}