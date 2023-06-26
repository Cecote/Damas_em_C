#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void welcome(char *gameType);
void playerSelection(char *gameType, char *amountPlayers);

int main(){
    char gameType[100], amountPlayers[100];
    int cont = 0;

    while(cont == 0){
        welcome(gameType);
        if ((strcmp(gameType, "Sair") == 0) || strcmp(gameType, "sair") == 0){
            printf("Obrigado por jogar o nosso jogo, até a próxima!\n");
            exit(1);
        }
        else if(strcmp(gameType, "1") == 0){
            while(cont == 0){
                playerSelection(gameType, amountPlayers);
                
                if ((strcmp(amountPlayers, "Sair") == 0) || strcmp(amountPlayers, "sair") == 0){
                    printf("Obrigado por jogar o nosso jogo, até a próxima!\n");
                    exit(1);
                }
                else if((strcmp(amountPlayers, "1") == 0)){
                    printf("implementar...\n");
                    cont++;
                }
                else if((strcmp(amountPlayers, "2") == 0)){
                    cont++;
                }
                else{
                    system("clear");
                    printf("Opção inválida, favor selecionar uma das segunintes opções:\n\n");
                }    
            }
        }
        else if(strcmp(gameType, "2") == 0){
            printf("implementar...\n");
        }
        else{
            system("clear");
            printf("Opção inválida, favor selecionar uma das segunintes opções:\n\n");
        }
    }
    
    

    return 0;
}

void welcome(char *gameType){

    printf("-Bem vindo ao jogo de Damas em C-\nO que deseja fazer?\n\n1 - Começar um novo jogo\n2 - Continuar um jogo\n\nDigite a opção desejada (Caso deseje encerrar o jogo, basta digitar 'sair' a qualquer momento):\n");
    fgets(gameType, sizeof(gameType), stdin);
    gameType[strcspn(gameType, "\n")] = '\0';
    printf("\n");

}

void playerSelection(char *gameType, char *amountPlayers){

    printf("Digite a quantidade de jogadores < 1 / 2 >:\n");
    fgets(amountPlayers, sizeof(amountPlayers), stdin);
    amountPlayers[strcspn(amountPlayers, "\n")] = '\0';
    printf("\n");

}