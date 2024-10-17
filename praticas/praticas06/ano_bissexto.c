#include<stdio.h>
int main() {

int ano;
printf("Digite um ano: ");
scanf("%i", &ano);

if ((ano % 4 == 0 && ano % 100!= 0) || ano % 400 == 0){
    printf("O ano %d eh bissxeto\n", ano);
}else{  
    printf("O ano %d nao eh bissxeto\n", ano);
}

    return 0;
}