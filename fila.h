

#ifndef FILA_H
#define FILA_H

#define MAX 100

typedef struct Fila {
    int inicio;
    int fim;
    int elementos[MAX];
} Fila;

Fila* criarFila();
Fila* inserirFim(Fila* f, int valor);
Fila* removerFim(Fila* f);
void consultaInicio(Fila* f);
int filaVazia(Fila* f);
int filaCheia(Fila* f);
void liberarFila(Fila* f);
void printFila(Fila* f);

#endif // FILA_H
