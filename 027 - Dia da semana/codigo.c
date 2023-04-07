#include <stdio.h>

int main(){
    int A, B, C, D, Dia, Mes, Ano, R;
    
    scanf("%d%d%d", &Dia, &Mes,&Ano);
    
    A = Ano - 1900;
    B = A/4;
    if ((Ano % 100 != 0 && Ano % 4 == 0 || Ano % 400 == 0) && Mes <= 2 && Dia <= 29)
        B -=1;
    
    if (Mes == 2 || Mes == 3 || Mes == 11 )
        C = 3;
    else if (Mes == 1 || Mes == 10)
        C = 0;
    else if (Mes == 3 || Mes == 7)
        C = 6;
    else if (Mes == 5)
        C = 1;
    else if (Mes == 6)
        C = 4;
    else if (Mes == 8)
        C = 2;
    else if (Mes == 9 || Mes == 12)
        C = 5;
    
    D = Dia-1;
    
    R = (A+B+C+D)%7;
    
    if(R == 0)
        printf("SEG");
    else if(R == 1)
        printf("TER");
    else if(R == 2)
        printf("QUA");
    else if(R == 3)
        printf("QUI");
    else if(R == 4)
        printf("SEX");
    else if(R == 5)
        printf("SAB");
    else if(R == 6)
        printf("DOM");
    
    
}