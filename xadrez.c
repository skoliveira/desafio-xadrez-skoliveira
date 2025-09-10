#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo (int num) {
    if (num > 0) {
        moverBispo (num-1);
        printf("%d. Cima, Direita\n", num);
    }
}

void moverTorre (int num) {
    if (num > 0) {
        moverTorre (num-1);
        printf("%d. Direita\n", num);
    }
}

void moverRainha (int num) {
    if (num > 0) {
        moverRainha (num-1);
        printf("%d. Esquerda\n", num);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    int movimento_bispo = 5;
    printf("Movimentação do Bispo (recursiva):\n");
    moverBispo(movimento_bispo);

    printf("\nMovimentação do Bispo (loop alinhados):\n");
    for (int i = 0; i < movimento_bispo; i++)
    {
        printf("%d. Cima", i+1);
        for (int j = 0; j < movimento_bispo; j++)
        {
            if(i == j) {
                printf(", Direita\n", j+1);
            }
        }
    }
    
    
    int movimento_torre = 5;
    printf("\nMovimentação da Torre:\n");
    moverTorre(movimento_torre);
    
    int movimento_rainha = 8;
    printf("\nMovimentação da Rainha:\n");
    moverRainha(movimento_rainha);
  
    // Implementação aprimorada do movimento do Cavalo
    const int MOVIMENTO_VERTICAL = 2;
    const int MOVIMENTO_HORIZONTAL = 1;
    int posicao_atual = 1;
    printf("\nMovimentação do Cavalo:\n");
    for (int y = 1; y <= MOVIMENTO_VERTICAL + MOVIMENTO_HORIZONTAL; y++) {
        for (int x = 1; x <= 2; x++) {
            // Pula iterações desnecessárias
            if (y > MOVIMENTO_VERTICAL && x > 1) {
                continue;
            }
            
            // Controle do movimento vertical
            if (y <= MOVIMENTO_VERTICAL) {
                printf("%d. Cima\n", posicao_atual++);
                // Interrompe o loop interno após movimento vertical
                break;
            }
            
            // Controle do movimento horizontal
            if (y > MOVIMENTO_VERTICAL) {
                printf("%d. Direita\n", posicao_atual++);
                // Finaliza após o movimento horizontal
                if (x == MOVIMENTO_HORIZONTAL) {
                    break;
                }
            }
        }
    }

    return 0;
}
