#include <stdio.h>
#include <stdlib.h>

struct no {
    int info;
    struct no *prox;
};

struct no* insere_lista(struct no *L, int valor) {
    struct no *novo = (struct no*) malloc(sizeof(struct no));

    novo->info = valor;

    if (L == NULL || valor < L->info) {
        novo->prox = L;
        return novo;
    }

    struct no *atual = L;

    while (atual->prox != NULL && atual->prox->info < valor) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;

    return L;
}

struct no* remove_d(struct no *L) {

    if (L == NULL)
        return NULL;

    struct no *atual = L;

    while (atual->prox != NULL) {

        if (atual->info == atual->prox->info) {

            struct no *remover = atual->prox;

            atual->prox = remover->prox;
            free(remover);
            

        } else {

            atual = atual->prox;
        }
    }

    return L;
}

void imprime_lista(struct no *L) {

    while (L != NULL) {

        printf("%d -> ", L->info);

        L = L->prox;
    }

    printf("NULL\n");
}

int main() {

    struct no *L = NULL;

    L = insere_lista(L, 34);
    L = insere_lista(L, 3);
    L = insere_lista(L, 3);
    L = insere_lista(L, 25);
    L = insere_lista(L, 65);
    L = insere_lista(L, 65);
    L = insere_lista(L, 7);
    L = insere_lista(L, 98);

    printf("Lista original:\n");
    imprime_lista(L);

    if (L != NULL) {

        L = remove_d(L);

        printf("\nLista sem duplicados:\n");
        imprime_lista(L);
    }

    return 0;
}