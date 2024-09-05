#include <stdio.h>
int main() { 
  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
   printf("Digite a matricula: ", matricula);
  scanf("%i", &matricula);
  printf("Digite a nota ", a1);  
  scanf("%f", &a1);
  printf("Digite a nota ", a2);
  scanf("%f", &a2);
  float media = (a1 + a2) / 2;  
  printf("A media do aluno %i é: %.1f\n", matricula, media);





  
  
  
  return 0;


}