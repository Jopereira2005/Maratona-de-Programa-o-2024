#include <stdio.h>

int main() {
  int aposta[6], qtdd;

  for(int i = 0;i < 6; i++) 
    scanf("%i", &aposta[i]);
  
  scanf("%i", &qtdd);

  for(int i = 0; i < qtdd; i++) {
    int tamanho_jogo = 0, acertos = 0;
    int jogo[15];

    for(int j = 0; j < 15; j++) {
      scanf("%i", &jogo[j]);
      tamanho_jogo++;
      if(jogo[j] == 0)
        break;
    }

    for(int j = 0; j < tamanho_jogo; j++) {
      for(int k = 0; k < 6; k++) {
        if(jogo[j] == aposta[k]) {
          acertos++;
        }
      }
    }

    printf("Quadras: %i", (acertos == 4) ? 1 : 0);
    printf("\nQuinas: %i", (acertos == 5) ? 1 : 0);
    printf("\nSena: %i\n", (acertos == 6) ? 1 : 0);
  }
}

