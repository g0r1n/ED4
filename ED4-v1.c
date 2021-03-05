/*****************************************
   Enunciado: Menu (Caixa eletrônico)
   Autor: Wilson da Silva Goltara
   Histórico de versões: v1.1
*****************************************/

/* Importações de Bibliotecas */
#include <stdio.h>

/* Funçõe principal */
int main() {
/* Declarações de variáveis */
int option, i; /* variavel de opcao do usuario e controlador de loop */

// ENTRADA

// PROCESSAMENTO
for(i=0;i<=10;i++){                                         /*no loop foi atribuido 10 tentativas ao cliente, a cada opcao*/
    printf("=== CAIXA ELETRÔNICO ===\n");                   /*entra no switch e imprime respectivamente o que foi escolhido, voltando para o loop até ser*/
    printf("1 - Sacar.\n");                                 /*o usuario escolher a opcao 4 que encerre o programa, ou atingir 10 tentativas.*/
    printf("2 - Depositar.\n");
    printf("3 - Saldo/Extrato.\n");
    printf("4 - Encerrar programa.\n");
    printf("obs: voce tem 10 tentativas.\n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d",&option);
        
    switch (option){
        case 1:
            printf("voce escolheu a opcao 'Sacar'.\n\n");
            break;
        case 2:
            printf("voce escolheu a opcao 'Depositar'.\n\n");
            break;
        case 3:
            printf("voce escolheu a opcao 'Saldo'.\n\n");
            break;
        case 4:
            printf("voce escolheu encerrar o programa.\n\n");
            return 0;
        default:
            printf("Voce escolheu a opcao invalida.\n\n");
            break;
        }
    }
    return 0;
}
