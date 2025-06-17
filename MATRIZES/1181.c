#include <stdio.h>

int main() {
    float matriz[12][12];
    int linha;
    char operacao;
    float resultado = 0;
    
    
    scanf("%d", &linha);
    
    
    scanf(" %c", &operacao);  
   
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
 
    for(int j = 0; j < 12; j++) {
        resultado += matriz[linha][j];
    }
    
  
    if(operacao == 'M') {
        resultado /= 12;  
    }
    
    
    printf("%.1f\n", resultado);
    
    return 0;
}
