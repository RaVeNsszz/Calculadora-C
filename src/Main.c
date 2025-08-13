#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "enum/operacoes.h"


int main(){
    enum Operacao op = SOMA;
    do{
        printf("\n===== CALCULADORA =====\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("-1. Sair\n");
        printf("=======================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op < -1 || op > 4){
            printf("Opcao invalida! Tente novamente.\n");
            continue;
        }
        if(op == -1){
            printf("Saindo...\n");
            break;
        }
    } while (op != -1);

    return 0;
}