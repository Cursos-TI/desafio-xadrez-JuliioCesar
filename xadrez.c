#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//Função move REI
void moveRei(){
    char direcao[50];
    printf("Escolha a direção\n");
    scanf("%s", direcao);

    printf("♔ - Uma casa a %s", direcao); //Movimentando o Rei!
}

// Funçao move rainha
void moveRainha(){
    int quantidadeDeCasas;
    char direcao[50];

    printf("Quantas casa quer andar?\n");
    scanf("%d", &quantidadeDeCasas);
    printf("Escolha a direção da rainha - Fileira - Diagonal - Coluna\n");
    scanf("%s", direcao);

    for (int i = 1; i <= quantidadeDeCasas; i++)
    {
        printf("♛ - %s \n", direcao); //Movimentando a rainha!
    }
}

// função para mover o Bispo;
void moveBispo(){
    int quantidadeDeCasas;
    char direcao[50];

    printf("Quantas casa quer andar?\n");
    scanf("%d", &quantidadeDeCasas);
    printf("Escolha a direção\n");
    scanf("%s", direcao);

    for (int i = 1; i <= quantidadeDeCasas; i++)
    {
        printf("♝ - Diagonal %s \n", direcao); //Movimentando a Bispo!
    }
}

// função para mover o cavalo;
void moveCavalo(){
    char direcao[50];
    printf("Escolha a direção\n");
    scanf("%s", direcao);
    int casas = 0;
    for (int i = 0; i < 1; i++)
    {
        do
        {
            printf("♞ - %s \n", direcao);//Imprime a direção do movimento
            casas++;
        } while (casas < 2);
        printf("♞ - esquerda\n");//Imprime a direção do movimento
    }

}

//Função para mover a torre
void moveTorre(){
    int quantidadeDeCasas;
    char direcao[50];

    printf("Quantas casa quer andar?\n");
    scanf("%d", &quantidadeDeCasas);
    printf("Escolha a direção\n");
    scanf("%s", direcao);

    for (int i = 1; i <= quantidadeDeCasas; i++)
    {
        printf("♜ - %s \n", direcao); //Movimentando a torre!
    }
}

// Função mover peão
void movePeao(){
    char direcao[50];
    printf("Escolha a direção\n");
    scanf("%s", direcao);

    printf("♟ - Uma casa a %s", direcao); //Movimentando o peão!
}

// Função de entrada de dados e escolhas
void menuEntrada(){
    int opcaoEntrada;
    printf("\n");
    printf("-------------------------\n");
    printf("DESAFIO MATECHEK - XADREZ\n");
    printf("-------------------------\n");
    printf("Escolha o numero e Mova sua peça!\n");
    printf("1 - Rei ♔\n");
    printf("2 - Rainha ♛\n");
    printf("3 - Bispo ♝\n");
    printf("4 - Cavalo ♞\n");
    printf("5 - Torre ♜\n");
    printf("6 - Peão ♟\n");
    scanf("%d", &opcaoEntrada);

    switch (opcaoEntrada){
    case 1:
        printf("1 - Rei ♔\n");
        moveRei();
        break;
    case 2:
        moveRainha();
        break;
    case 3:
        moveBispo();
        break;
    case 4:
        moveCavalo();
        break;
    case 5:
        moveTorre();
        break;
    case 6:
        movePeao();
        break;
    default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    menuEntrada();
    return 0;
}
