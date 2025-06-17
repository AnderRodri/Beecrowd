#include <stdio.h>
 
int main() {
 
    int n, i;
    int a=0, b=1, c;

    scanf("%d", &n);
    
    if(n >= 1) printf("0");
    if(n >= 2) printf(" 1");
    
    for(i= 2; i < n ; i++){
        c = a + b;
        a = b;
        b = c;
        printf(" %d", b);
    }
    printf("\n");
 
    return 0;
}
