#include <stdio.h>
 
int main() {
 
   int total_dias;
   int ano , mes, dia;
   
   scanf("%d",&total_dias);
   
   ano = total_dias / 365;
   
   mes = (total_dias % 365)/30;
   
   dia = (total_dias % 365)%30;
   
   printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
 
    return 0;
}
