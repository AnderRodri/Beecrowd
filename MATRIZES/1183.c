#include <stdio.h>

int main() {
    char operacao;
    float matriz[12][12];
    float resultado = 0;
    int elementos= 0;
    
    scanf(" %c", &operacao);

    // Leitura da matriz pelo usuário
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 12; i++) {
        for(int j = i + 1; j < 12; j++) {
            resultado += matriz[i][j];
            elementos++;
        }
    }
    
   if(operacao == 'M'|| operacao =='m'){
       resultado /= elementos;
   } 
   
   printf("%.1f\n", resultado);
    
    return 0;
}
