#include <stdio.h>

int main(){
    
    float Kg, H, IMC;
    
    scanf("%f%f", &Kg, &H);
    
    IMC = Kg/(H*H);
    
    if (IMC < 17)
        printf("muito abaixo do peso");
    if (IMC >= 17 && IMC <=18.49)
        printf("abaixo do peso");
    if (IMC >= 18.5 && IMC <=24.99)
        printf("peso normal");
    if (IMC >= 25 && IMC <=29.99)
        printf("acima do peso");
    if (IMC >= 30 && IMC <=34.99)
        printf("obesidade");
    if (IMC >= 35 && IMC <=39.99)
        printf("obesidade severa");
    if (IMC >=40)
        printf("obesidade morbida");
    
    return 0;
}