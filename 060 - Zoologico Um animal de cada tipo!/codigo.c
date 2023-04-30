#include <stdio.h>

int main() {
    int n, i, j, k, ver, aux = 0;

    scanf("%d", &n);

int V[n], V2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }


    k = 0;
    for (i = 0; i < n; i++) {
        ver = 0;
        for (j = 0; j < k; j++) {
            if (V[i] == V2[j]) {
                ver = 1;
                break;
            }
        }
        if (ver == 0) {
            V2[k] = V[i];
            k++;
        }
    }

    
    for (i = 0; i < k-1; i++) {
        for (j = i+1; j < k; j++) {
            if (V2[i] > V2[j]) {
                aux = V2[i];
                V2[i] = V2[j];
                V2[j] = aux;
            }
        }
    }

    
    for (i = 0; i < k; i++) {
        printf("%d ", V2[i]);
    }
    printf("\n");

    return 0;
}
