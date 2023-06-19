#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void welcome(char *gameType);
void playerSelection(char *gameType, char *amountPlayers);

int main(){
    char gameType[4], amountPlayers[4];

    welcome(gameType);
    playerSelection(gameType, amountPlayers);

    if(amountPlayers == 1){
        printf("implementar...\n");
    }
    else if(amountPlayers == 2){}

    return 0;
}

void welcome(char *gameType){

    printf("-Bem vindo ao jogo de Damas em C-\nO que deseja fazer?\n\n1 - Começar um novo jogo\n2 - Continuar um jogo\n\nDigite a opção desejada (Caso deseje encerrar o jogo, basta digitar 'sair' a qualquer momento):\n");
    fgets(gameType, sizeof(gameType), stdin);
    printf("\n");

}

void playerSelection(char *gameType, char *amountPlayers){

    printf("Digite a quantidade de jogadores < 1 / 2 >:\n");
    fgets(amountPlayers, sizeof(amountPlayers), stdin);
    printf("\n");

}