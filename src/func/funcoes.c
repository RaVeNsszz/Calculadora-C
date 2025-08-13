#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return NAN; // Retorna Not-a-Number para indicar erro
    }
    return a / b;
}