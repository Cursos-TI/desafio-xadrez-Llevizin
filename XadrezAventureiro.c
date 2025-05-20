#include <stdio.h>  // Biblioteca padrão para entrada e saída 

int main(){

    // Declaração de variáveis e inicialização com valor 1
    int torre = 1;  
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre\n"); // Imprime título da seção

    while (torre <= 5){   // Enquanto torre for menor ou igual a 5, repete:
        printf("Direita\n");  // Imprime "Direita"
        torre++;              // Incrementa a variável torre (anda uma casa)
    }

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita 
    printf("\nMovimentação do Bispo\n"); // Imprime título da seção

    do { // Executa pelo menos uma vez, e continua enquanto bispo <= 5
        printf("Cima Direita\n"); // Imprime o movimento diagonal
        bispo++;                  // Incrementa a variável bispo
    } while (bispo <= 5);


    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha\n"); // Imprime título da seção

    for (rainha = 1; rainha <= 8; rainha++){ // Repete 8 vezes
        printf("Esquerda\n");  // Imprime "Esquerda"
    }

 
    // Movimentação do Cavalo: 2 casas para baixo e 1 para a esquerda
    printf("\nMovimentação do Cavalo\n"); // Imprime título da seção

    int j = 0; // Contador para o movimento "Baixo"

    for (int i = 0; i < 1; i++) {   // Loop externo (roda 1 vez)
        while (j < 2) {             // Loop interno (roda 2 vezes)
            printf("Baixo\n");      // Imprime "Baixo"
            j++;                    // Incrementa j
        }
        printf("Esquerda\n");       // Depois das 2 casas pra baixo, move 1 pra esquerda
    }

    // Indica que o programa terminou com sucesso
    return 0;
}
