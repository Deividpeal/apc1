#include <stdio.h>

int main() {
  
  int numero = 0;

  printf ("entre com um numero: ");
  
  int deu_certo = scanf ("%i", &numero);
 
  printf ("você digitou: %i\n", numero);
  
  printf("A leitura deu certo? %i\n", deu_certo);

  int coord_x = 0;
  int coord_y = 0;

  printf("Entre com as coordenadas de um ponto 1 e 2");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);

  printf("Voce digitou: em x = %i em y = %i\n", coord_x, coord_y);
  deu_certo = scanf("%i %i", &coord_x, &coord_y);
  

  
  return 0;
}