#include <stdio.h>

int main(){
    

    char c[8], n;
    int v = 0;
    
    scanf("%c", &n);
    scanf("%s", c);
    
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == n) {
            v++;
        }
    }
    printf("%d\n", v);
    
    
    
    return 0;
}