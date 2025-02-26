#include <stdio.h>
int main(){

    // Inicializando as variáveis
    
    int torre = 0;
    int bispo = 0;
    

    // Movimentação da torre

   do
   { printf("Torre\n");
     printf("DIREITA\n");
     torre++;
   } while (torre < 5);

   // Movimentação do bispo

   while (bispo < 5)
   {
     printf("Bispo\n");
     printf("Cima, Direita\n");
     
     bispo++;
   }

   //Movimentação rainha

    for(int rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha\n");
        printf("Esquerda\n");

    }    







return 0;
} 