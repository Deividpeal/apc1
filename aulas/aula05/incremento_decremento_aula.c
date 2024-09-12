#include <stdio.h>
int main () {

//entrada
  
int numero;
printf("Entre com um numero: ");
int deu_certo = scanf("%i", &numero);

//processamento
//numero = numero + 1;
int incremento = numero;
incremento ++; // ou ++incremento, ele adiciona o numero primeiro nesse caso 
int pre_incremento = ++incremento;
int pos_incremento = incremento++;
  
//numero = numero -1;
int decremento = numero;
decremento --;
int pre_decremento = --decremento;
int pos_decremento = decremento--;

//saida

printf("incremento de %i é %i\n", numero, incremento);
printf("Pre incremento de %i é %i\n", numero, pre_incremento);
printf("Pos incremento de %i é %i\n", numero, pos_incremento);
printf("decremento de %i é %i\n", numero, decremento);
printf("Pre decremento de %i é %i\n", numero,pre_decremento);
printf("Pos decremento de %i é %i\n", numero, pos_decremento);

  return 0;
}