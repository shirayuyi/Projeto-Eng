#include <stdio.h>
#include <time.h>

int main() {

  int penis = 13;
  int escolha = 0;
  int menu_sel;
  int nome;
  int idade;
  printf("Bem vindo ao Jogo.\n");
  printf("Escolha uma opção para começar\n");
  printf("1 - Novo jogo\n");
  printf("2 - Sair\n");
int deu_certo = scanf("%i", &menu_sel);

/*
if (menu_sel == 1) {

  printf("Vamos começar!\n");
    printf("Qual seu nome?\n");
    deu_certo = scanf("%i", &nome);
    
} else if (deu_certo) {

    printf("Qual a sua idade?\n");
    deu_certo = scanf("%i", &idade);
  
  } else if (menu_sel == 2) {

    printf("Até logo!!\n");
  
  } else {
  
    int invalido = printf("Opção inválida, tente novamente");
  
  }
*/

  switch (menu_sel = 1) {
    
  case 1: {
        
        printf("Bem vindo!\n");
        printf("Qual o seu nome?\n");
        deu_certo = scanf("%i", &nome);

        if (nome != 0) { 
    
        printf("Qual a sua idade?\n");
        deu_certo = scanf("%i", &idade);
           
        }

    
    } break;
  
    case 2: printf("Até logo!!\n");
    
 }
  return 0;
}