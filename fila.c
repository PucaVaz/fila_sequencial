#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int incrementa(int i) {
    return (i + 1) % MAX;
}

Fila* criarFila() {
    Fila* f = (Fila*) malloc(sizeof(Fila));
    if (f == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }
    f->inicio = 0;
    f->fim = 0;
    return f;
}

Fila* inserirFim(Fila* f, int valor) {
    if (filaCheia(f)) {
        printf("Fila cheia\n");
        return f;
    }
    f->elementos[f->fim] = valor;
    f->fim = incrementa(f->fim);
    return f;
}

Fila* removerFim(Fila* f) {
    if (filaVazia(f)) {
        printf("Fila vazia\n");
        return f;
    }
    f->inicio = incrementa(f->inicio);
    return f;
}

void consultaInicio(Fila* f) {
    if (filaVazia(f)) {
        printf("Fila vazia\n");
    } else {
        printf("Inicio: %d\n", f->elementos[f->inicio]);
    }
}

int filaVazia(Fila* f) {
    return f->inicio == f->fim;
}

int filaCheia(Fila* f) {
    return incrementa(f->fim) == f->inicio;
}

void liberarFila(Fila* f) {
    free(f);
}

void printFila(Fila* f) {
    int i = f->inicio;
    while (i != f->fim) {
        printf("%d ", f->elementos[i]);
        i = incrementa(i);
    }
    printf("\n");
}
