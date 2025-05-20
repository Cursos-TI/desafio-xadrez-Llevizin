#include <stdio.h> // Biblioteca padrão para entrada e saída (ex: printf)

int main(){

    // Declaração de variáveis inteiras iniciadas com valor 1
    int torre = 1;   // Contador para movimentação da torre
    int bispo = 1;   // Contador para movimentação do bispo
    int rainha = 1;  // Contador para movimentação da rainha

    // Movimentação da Torre 
    printf("\nMovimentação da Torre\n"); // Título da seção da Torre

    while (torre <= 5){ // Enquanto a torre for menor ou igual a 5
        printf("Direita\n"); // Imprime o movimento "Direita"
        torre++;             // Incrementa o contador
    }

    // Movimentação do Bispo 
    printf("\nMovimentação do Bispo\n"); // Título da seção do Bispo

    do {
        printf("Cima Direita\n"); // Imprime o movimento diagonal "Cima Direita"
        bispo++;                  // Incrementa o contador
    } while (bispo <= 5);         // Repete até bispo ser maior que 5

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha\n"); // Título da seção da Rainha

    for (rainha = 1; rainha <= 8; rainha++){ // Executa 8 vezes
        printf("Esquerda\n"); // Imprime o movimento "Esquerda"
    }

    // Indica que o programa terminou com sucesso
    return 0;
}
