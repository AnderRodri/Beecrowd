#include <stdio.h>
 
int main() {
 
    int hora_inical , minuto_inicial, hora_fim ,minuto_fim;
    int duracao_hora, duracao_minuto;
    
    scanf("%d %d %d %d", &hora_inical,&minuto_inicial, &hora_fim, &minuto_fim);
    
    int inicio_tot = hora_inical * 60 + minuto_inicial;
    int fim_tot = hora_fim * 60 + minuto_fim;
    
    int duracao_total;
    
    if(fim_tot > inicio_tot){
        duracao_total = fim_tot - inicio_tot;
    }
    else {
        duracao_total = (24 * 60 - inicio_tot)+ fim_tot;
    }
    
    duracao_hora = duracao_total /60;
    duracao_minuto = duracao_total %60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_hora, duracao_minuto);
    
    return 0;
}
