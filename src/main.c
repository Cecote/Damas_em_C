#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int welcome();

int main(){
    int gameType;

    gameType = welcome();


    return 0;
}

int welcome(){
    int option;

    printf("-Bem vindo ao jogo de Damas em C-\nO que deseja fazer?\n\n1 - Começar um novo jogo\n2 - Continuar um jogo\n\nDigite a opção desejada (Caso deseje encerrar o jogo, basta digitar 'sair' a qualquer momento):\n");
    scanf("%d", &option);

    return option;
}