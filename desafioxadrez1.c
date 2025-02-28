#include <stdio.h>
int main(){

    // Inicializando as variáveis
    
    int torre = 0;
           int bispo = 0;
                int cavalo = 1;

    // Movimentação da torre

   do
   { printf("Torre\n");
     printf("DIREITA\n");
     printf("\n");
     torre++;
   }  while (torre < 5);

   // Movimentação do bispo

   while (bispo < 5)
   {
      printf("Bispo\n");
        printf("Cima, Direita\n");
        printf("\n");
     
     bispo++;
   }

   //Movimentação rainha

    for(int rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha\n");
           printf("Esquerda\n");
           printf("\n");
    }

    // Movimentaçao cavalo
    
  while (cavalo--)
  {
    for(int i = 0; i < 2; i++){
    printf("Cavalo\n");
        printf("Baixo\n");
        printf("\n");
    }
    printf("Cavalo\n");
      printf("Esquerda\n");
      printf("\n");

  }
  
    







return 0;
}



