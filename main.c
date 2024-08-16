#include <stdio.h>

#include "fila.h"


int main() {
    Fila* f = criarFila();
    f = inserirFim(f, 1);
    f = inserirFim(f, 2);

    printFila(f);
    f = removerFim(f);
    printFila(f);
    consultaInicio(f);
    if (filaVazia(f)) {
        printf("Fila vazia\n");
    } else {
        printf("Fila nao vazia\n");
    }
    if (filaCheia(f)) {
        printf("Fila cheia\n");
    } else {
        printf("Fila nao cheia\n");
    }
    liberarFila(f);

    return 0;
}
