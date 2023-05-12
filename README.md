# Pilha Dinâmica em C
Esse projeto consiste em uma implementação de uma pilha dinâmica em linguagem C, utilizando ponteiros e alocação dinâmica de memória.

## Estrutura do Código
O código é composto pelos seguintes elementos:

- `typedef struct no`: define a estrutura de um nó da pilha, que contém um valor inteiro e um ponteiro para o próximo nó.
- `typedef struct pilha`: define a estrutura da pilha, que contém um ponteiro para o topo da pilha e a quantidade de elementos na pilha.
- `void inicializar_pilha(Pilha *p)`: inicializa a pilha, definindo o topo como nulo e a quantidade como zero.
- `int vazia_pilha(Pilha *p)`: verifica se a pilha está vazia, retornando 1 se estiver e 0 caso contrário.
- `int topo_pilha(Pilha *p)`: retorna o valor do topo da pilha, sem removê-lo.
- `int quantidade_pilha(Pilha *p)`: retorna a quantidade de elementos na pilha.
- `int empilhar(Pilha *p, int valor)`: adiciona um novo elemento à pilha, alocando um novo nó e atualizando o topo e a quantidade. Retorna 1 se a operação foi bem sucedida e 0 caso contrário.
- `int desempilhar(Pilha *p)`: remove o elemento no topo da pilha, atualizando o topo e a quantidade. Retorna o valor do elemento removido ou 0 se a pilha estiver vazia.
- `int main()`: função principal que realiza a interação com o usuário, permitindo empilhar, desempilhar e consultar o topo da pilha.
## Como Utilizar
Para utilizar a implementação da pilha dinâmica, basta compilar o código-fonte utilizando um compilador C e executar o arquivo gerado. O usuário poderá realizar as seguintes operações:

- **Empilhar**: adicionar um novo elemento à pilha, informando um valor inteiro. Se a operação for bem sucedida, a mensagem "empilhado" será exibida na tela.
- **Desempilhar**: remover o elemento no topo da pilha e exibir o seu valor na tela. Se a pilha estiver vazia, a mensagem "pilha vazia" será exibida.
- **Consultar o topo**: exibir o valor do elemento no topo da pilha, sem removê-lo.
- **Sair**: encerrar o programa.
