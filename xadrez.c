#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < movimento_bispo; i++)
    {
        printf("%d. Cima, Direita\n", i+1);
    }
    
    int movimento_torre = 5;
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < movimento_torre)
    {   
        printf("%d. Direita\n", j+1);
        j++;
    }
    
    int movimento_rainha = 8;
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do
    {
        printf("%d. Esquerda\n", k+1);
        k++;
    } while (k < movimento_rainha);

    int movimento_cavalo[2] = {1,2};
    printf("\nMovimentação do Cavalo:\n");
    for (int l = 0; l < movimento_cavalo[0]; l++)
    {
        int m = 0;
        while (m < movimento_cavalo[1])
        {
            printf("%d. Baixo\n", m+1);
            m++;
        }
        printf("%d. Esquerda\n", m+1);
    }
    
    return 0;
}
