#include <stdio.h>

void MoverTorre(int Torre){               // Criando os Voids
    if (Torre > 0)
    {
        printf("Direita\n");
        MoverTorre(-1);
    }
    

}

void MoverBispo(int Bispo){
    if (Bispo > 0)
    {
        printf("Cima & Direita\n");
        MoverBispo(-1);
    }
    

}

void MoverRainha(int Rainha){
    if (Rainha > 0)
    {
        printf("Esquerda\n");
        MoverRainha(-1);
    }
    

}


int main(){

int Cavalo = 1, Horse = 1, Escolha, torre, bispo, rainha;       // Definindo variaveis que serão utilizadas

printf("Teste Movimentação Peças Xadrez, Escolha Uma\n\n");     // Menu De Escolhas Qual peça sera movimentada, parte de armazenamento de entrada
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n\n");
printf("Qualquer Outro Caracter Causara O Encerramento Do Programa\n\n");
scanf(" %d", &Escolha);

switch (Escolha)                                                // Menu De Escolhas Qual Peça Sera movimentada Parte Logica
{
case 1: // Torre - 5 casas para a direita
    printf("Torre Se Move Cinco Posições A Direita\n\n");
    torre = 5;
    while (torre > 0)
    {
        MoverTorre(torre);
        torre--;
    }
    break;
case 2: // Bispo - 5 casas para a diagonal (Cima - Direita)
    printf("Bispo Se Move Cinco Posições Na Diagonal Direita\n\n");
    bispo = 5;
    while (bispo > 0)
    {
        MoverBispo(bispo);
        bispo--;
    }
    break;
case 3: // Rainha - 8 casas para a esquerda
    printf("Rainha Se Move Oito Posições A Esquerda \n\n");
    rainha = 8;
    while (rainha > 0)
    {
        MoverRainha(rainha);
        rainha--;
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