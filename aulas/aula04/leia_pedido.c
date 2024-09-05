#include <stdio.h>
int main () {
  
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;
  printf("Digite o produto: ", produto);
  scanf("%[^\n]s", produto);
  printf("Digite a quantidade: ", quantidade);
  scanf("%i", &quantidade);
  print("Digite o valor: ", valor);
  scanf("%f", &valor);
  

  printf("==============================\n");
  printf("         P E D I D O\n");
  printf("==============================\n");
  printf("Produto         Qtd Valor Unit\n");
  printf("%-15s %03i %.2f\n", produto, quantidade, valor);
  printf("==============================\n");
  
  return 0;
}