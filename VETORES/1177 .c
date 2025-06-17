#include <stdio.h>
 
int main() {
 
    int i,T;
    int N[1000];
    
    scanf("%d", &T);
    
    for(i = 0 ; i  < 1000; i ++){
        
        N[i] = i % T;
    }
    
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

 
    return 0;
}
