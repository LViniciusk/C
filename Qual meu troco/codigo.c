#include <stdio.h>
#include <math.h>

int main(){
    float Tc, Vp, T;
    float c100,c50,c20,c10,c5,c2,m1,m05,m025,m01,m005,m001;
    float r100,r50,r20,r10,r5,r2,r1,r05,r025,r01,r005,r001;
    
    scanf("%f%f", &Tc, &Vp);
    
    
    if(Vp > Tc){
        //troco
        T = Vp - Tc;
        
        //Cedulas
        c100 = floorf(T/100);
        r100 = fmod(T,100);
        
        c50 = floorf(r100/50);
        r50 = fmod(r100,50);
        
        c20 = floorf(r50/20);
        r20 = fmod(r50,20);
        
        c10 = floorf(r20/10);
        r10 = fmod(r20,10);
        
        c5 = floorf(r10/5);
        r5 = fmod(r10,5);
        
        c2 = floorf(r5/2);
        r2 = fmod(r5,2);
        
        //Moedas
        m1 = floorf(r2/1);
        r1 = fmod(r2,1);
        
        m05 = floorf(r1/0.50);
        r05 = fmod(r1,0.50);
        m025 = floorf(r05/0.25);
        r025 = fmod(r05,0.25);
        
        m01 = floorf(r025/0.10);
        r01 = fmod(r025,0.10);
        
        m005 = floorf(r01/0.05);
        r005 = fmod(r01,0.05);
        
        m001 = floorf(r005/0.01);
        r001 = fmod(r005,0.01);
        
        //print
        printf("Cédulas de R$100.00: %.0f\nCédulas de R$50.00: %.0f\nCédulas de R$20.00: %.0f\nCédulas de R$10.00: %.0f\nCédulas de R$5.00: %.0f\nCédulas de R$2.00: %.0f\n", c100,c50,c20,c10,c5,c2);
        printf("Moeda de R$1.00: %.0f\nMoeda de R$0.50: %.0f\nMoeda de R$0.25: %.0f\nMoeda de R$0.10: %.0f\nMoeda de R$0.05: %.0f\nMoeda de R$0.01: %.0f\n",m1,m05,m025,m01,m005,m001);
        
        
    }else if (Vp < Tc){
        //falta
        printf("Valor Insuficiente, faltaram R$ %.2f", Tc-Vp);
    }else{
        //Valor Exato
        printf("Foi pago o valor exato.");
    }
    
    
}