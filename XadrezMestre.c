#include <stdio.h> // Biblioteca padrão para entrada e saída 

// Função recursiva que simula o movimento da Torre: 5 casas para a direita
void MovimentoTorre(int torre){
    if(torre <= 5){
        printf("Direita\n");                  // Imprime a direção do movimento
        MovimentoTorre(torre + 1);            // Chamada recursiva para a próxima casa
    }
}

// Função recursiva que simula o movimento do Bispo: 5 casas na diagonal (cima + direita)
// Também usa loops aninhados conforme solicitado
void MovimentoBispo(int bispo){
    if(bispo <= 5){
        for (int i = 0; i < 1; i++){          // Loop externo (vertical)
            for (int j = 0; j < 1; j++){      // Loop interno (horizontal)
                printf("Cima Direita\n");     // Imprime o movimento na diagonal
            }
        }
        MovimentoBispo(bispo + 1);            // Chamada recursiva
    }
}

// Função recursiva que simula o movimento da Rainha: 8 casas para a esquerda
void MovimentoRainha(int rainha){
    if(rainha <= 8){
        printf("Esquerda\n");                 // Imprime a direção
        MovimentoRainha(rainha + 1);          // Chamada recursiva
    }
}

int main(){

    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre\n");
    MovimentoTorre(torre);

    // Movimentação do Bispo: 5 casas na diagonal para cima e direita
    printf("\nMovimentação do Bispo\n");
    MovimentoBispo(bispo);

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha\n");
    MovimentoRainha(rainha);

    // Movimentação do Cavalo: 2 casas para cima e 1 para a direita (em "L")
    printf("\nMovimentação do Cavalo\n");

    int j = 0;
    for (int i = 0, x = 9; i < 1 && x < 10; i++, x++) {  // Loop com duas variáveis e condição dupla
        while (j < 2) {                                 // Repete duas vezes o movimento "Cima"
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");                            // Após subir 2 casas, move 1 casa à direita
    }

    // Indica que o programa terminou corretamente
    return 0;
}
