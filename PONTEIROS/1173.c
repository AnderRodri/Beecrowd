#include <stdio.h>


int main() {
    int X, N[10];
    
    scanf("%d", &X);
    
    N[0] = X;
    for(int i = 1; i < 10; i++) {
        N[i] = N[i-1] * 2;
    }
    
    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}
