# Fila Sequencial

Este é um exemplo de código em C que implementa uma fila sequencial utilizando um arquivo de cabeçalho `fila.h`.

## Como utilizar

1. Inclua o arquivo de cabeçalho `fila.h` no seu código.
2. Crie uma fila utilizando a função `criarFila()`.
3. Insira elementos na fila utilizando a função `inserirFim(fila, elemento)`.
4. Imprima a fila utilizando a função `printFila(fila)`.
5. Remova um elemento do fim da fila utilizando a função `removerFim(fila)`.
6. Consulte o elemento do início da fila utilizando a função `consultaInicio(fila)`.
7. Verifique se a fila está vazia utilizando a função `filaVazia(fila)`.
8. Verifique se a fila está cheia utilizando a função `filaCheia(fila)`.
9. Libere a memória alocada pela fila utilizando a função `liberarFila(fila)`.

## Exemplo de uso

```c
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
```
