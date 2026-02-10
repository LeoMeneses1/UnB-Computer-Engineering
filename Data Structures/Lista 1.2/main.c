//esse main.c foi feito por IA, pois etou com muito sono kakakakaka.

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    printf("Iniciando teste da lista encadeada...\n");

    Lista *l = criaLista();
    printf("Lista criada.\n");
    imprimeLista(l);

    printf("\nAdicionando 10, 20, 30 no INICIO (add)...\n");
    add(l, 10);
    add(l, 20);
    add(l, 30);
    imprimeLista(l);

    printf("\nAdicionando 40 e 50 no FINAL (append)...\n");
    append(l, 40);
    append(l, 50);
    imprimeLista(l);

    printf("\nInserindo 99 na posicao 2 (insert)...\n");
    insert(l, 2, 99);
    imprimeLista(l);
    
    printf("Tentando inserir -1 na posicao 0 (inicio)...\n");
    insert(l, 0, -1);
    imprimeLista(l);

    printf("\nRemovendo o item 99 (do meio)...\n");
    removeItem(l, 99);
    imprimeLista(l);

    printf("Removendo o item -1 (do inicio)...\n");
    removeItem(l, -1);
    imprimeLista(l);

    printf("Removendo o item 50 (do fim)...\n");
    removeItem(l, 50);
    imprimeLista(l);

    printf("\nTestando funcoes de busca...\n");
    
    int item_procurado = 20;
    if (search(l, item_procurado)) {
        printf("O item %d foi ENCONTRADO (search).\n", item_procurado);
    }
    
    int indice_item = indice(l, item_procurado);
    printf("O item %d esta no INDICE %d (indice).\n", item_procurado, indice_item);

    item_procurado = 123;
    if (!search(l, item_procurado)) {
        printf("O item %d NAO foi encontrado (search).\n", item_procurado);
    }

    printf("\nA lista esta vazia? %s\n", isEmpty(l) ? "Sim" : "Nao");

    printf("\nLiberando a memoria da lista...\n");
    int nos_liberados = liberaLista(l);
    printf("%d nos foram liberados. Teste concluido.\n", nos_liberados);

    return 0;
}
