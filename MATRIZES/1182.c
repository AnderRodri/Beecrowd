#include <stdio.h>

int main() {
    float matriz[12][12];
    int coluna;
    char operacao;
    float resultado = 0;
    
    
    scanf("%d", &coluna);
    
    
    scanf(" %c", &operacao);  
   
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
 
    for(int i = 0; i < 12; i++) {
        resultado += matriz[i][coluna];
    }
    
  
    if(operacao == 'M') {
        resultado /= 12;  
    }
    
    
    printf("%.1f\n", resultado);
    
    return 0;
}
