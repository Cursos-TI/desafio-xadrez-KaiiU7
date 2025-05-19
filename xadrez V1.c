#include <stdio.h>
int main(){

int Torre = 1, Bispo = 1, Rainha = 1, Cavalo = 1, Horse = 1, Escolha;

printf("Teste Movimentação Peças Xadrez, Escolha Uma\n\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n\n");
printf("Qualquer Outro Caracter Causara O Encerramento Do Programa\n\n");
scanf(" %d", &Escolha);

switch (Escolha)
{
case 1: // Torre - 5 casas para a direita
    printf("Torre Se Move Cinco Posições A Direita\n\n");
    while (Torre <= 5)
    {
        printf("Direita\n");
        Torre++;
    }
    break;
case 2: // Bispo - 5 casas para a diagonal (Cima - Direita)
    printf("Bispo Se Move Cinco Posições Na Diagonal Direita\n\n");
    do
    {
        if (Bispo <= 5)
        {
            printf("Cima, Dreita\n");
            Bispo++;
        }
        
    } while (Bispo <= 5);
    break;
case 3: // Rainha - 8 casas para a esquerda
    printf("Rainha Se Move Oito Posições A Esquerda \n\n");
    for (Rainha = 1;Rainha <= 8; Rainha++)
    {
        printf("Esquerda\n");
    }
    break;
case 4: // Cavalo - 2 casas para baixo e 1 para esquerda
    printf("Cavalo Se Move Em (L) \n\n");
    for (Cavalo = 2; Cavalo <= 2; Cavalo++)
    {
       while (Horse <= 2)
       {
        printf("Baixo\n");
        Horse++;
       }
       
        printf("Esquerda\n");
    }
    break;

default:
    printf("Saindo Do Programa...");
    break;
}







    
}