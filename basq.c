#include <stdio.h>

void menu(){
    printf("\n");
    printf("Convertedor de Estatisticas de basquete em porcentagem\n");
    printf("______________________________________________________________\n");
    printf("Porcentagem de acertos de cestas arremessadas\n");
    printf("porcentagem de acertos de cestas de 3\n");
}

void convesta(){
    int cestas, ceserro, porc;

    printf("insira quantas acertos o jogador acertou\n");
    scanf("%d",cestas);

    printf("insira quantos cestas o jogador errou\n");
    scanf("%d",ceserro);

    porc = (cestas + ceserro)/100
}