#include <stdio.h>
#include <string.h>

int main() {
  int rotacao;
  char mensagem[51];
  char alfabeto[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

  for(;;) {
    scanf("%i", &rotacao);
    scanf(" %[^\n]", mensagem);
    

    if(rotacao == 0) 
      break;

    if(rotacao > 20 || rotacao < 1 || strlen(mensagem) > 51) 
      goto fim;
    
    
    for(int i = 0; i < (strlen(mensagem)); i++) {
      if(mensagem[i] == 'A')
        mensagem[i] = '@';

      else if(mensagem[i] == 'S')
        mensagem[i] = '$';

      else if(mensagem[i] == 'E')
        mensagem[i] = '3';

      else if(mensagem[i] == 'I')
        mensagem[i] = '!';

      else if(mensagem[i] == 'O')
        mensagem[i] = '0';
      
      else if(mensagem[i] == ' ')
        mensagem[i] = '#';
      
      else {
        for(int j = 0; j < strlen(alfabeto); j++) {
          if(mensagem[i] == alfabeto[j]) {
            int rot = (j + rotacao) % 26;
            mensagem[i] = alfabeto[rot];
            break;
          } 
        }
      }
    } 
    fim:
    if(rotacao > 20 || rotacao < 1 || strlen(mensagem) > 51) 
      printf("ERROR");
    else
      printf("%s \n", mensagem);
    
    fflush(stdin);
  }
}