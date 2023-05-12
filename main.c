#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct pilha{
    No *topo;
    int quantidade;
}Pilha;

void inicializar_pilha(Pilha *p){
    p->topo = NULL;
    p->quantidade = 0;
}

int vazia_pilha(Pilha *p){
    return (p->topo == NULL);
}

int topo_pilha(Pilha *p){
    return p->topo->valor;
}

int quantidade_pilha(Pilha *p){
    return p->quantidade;
}

int empilhar(Pilha *p, int valor){
    if(quantidade_pilha(p) >= 0){
        No* n = malloc(sizeof(No));
        n->valor = valor;
        n->proximo = p->topo;
        p-> topo = n;
        p->quantidade++;
        return 1;
    }else{
        return 0;
    }
}

int desempilhar(Pilha *p){
    if(vazia_pilha(p)){
        return 0;
    }
    else{
        No* aux = malloc(sizeof(No));
        aux = p->topo;
        p->topo = aux->proximo;
        p->quantidade--;
        int valor = aux->valor;
        free(aux);
        return valor;
    }
}

int main()
{
    Pilha P;
    int op, valor, valor_desempilhado;
    inicializar_pilha(&P);
    
    scanf("%d",&op);
    do{
        switch(op){
            case 1:
                scanf("%d",&valor);
                if(empilhar(&P,valor) == 1){
                   printf("empilhado\n"); 
                }
                break;
            case 2:
                valor_desempilhado = desempilhar(&P);
                if(valor_desempilhado == 0){
                  printf("pilha vazia\n");  
                }else{
                  printf("%d\n",valor_desempilhado);
                }
                break;
            case 3:
                printf("%d\n",topo_pilha(&P));
                break;
            case -1:
            
                break;
        }
        if(op!=-1){ 
            scanf("%d",&op); 
        } 
    }while(op!=-1);
}

