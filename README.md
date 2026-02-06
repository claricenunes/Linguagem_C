---------------------------------------------------------
# Manual de Instalação
[Dev-C++ 5.0 beta 9.2 (4.9.9.2) with Mingw/GCC 3.4.2 compiler and GDB 5.2.1 debugger](https://www.dev-cpp.com/)

## Funções Básicas
**1. If, else if, else**

As funções if, else if e else criam *condições* que permitem ao programa decidir qual bloco de código executar com base em um valor booleano.

  a) If : O ponto de partida. Executa o código apenas se a condição for verdadeira.
  
  b) Else if : Permite testar uma nova condição caso a anterior tenha sido falsa. Você pode usar vários destes em sequência.
  
  c) Else : O "plano B". Executa um bloco de código caso nenhuma das condições anteriores seja atendida.


**2. Switch**

O Switch é uma *alternativa do if else* quando você tem uma única variável que precisa ser comparada com vários valores constantes.

  a) Vantagem : É mais fácil de ler e pode ser mais performático em listas longas de opções.
  
  b) Break : Essencial para "parar" a execução assim que o caso correto for encontrado, evitando que o código execute os casos de baixo acidentalmente.
  
  c) Default : Funciona como o else, sendo o caminho padrão caso nenhum case coincida.


**3. Do While**

Diferente do loop while comum (que verifica a condição antes de começar), o Do While garante que o *código seja executado pelo menos uma vez*.

a) Lógica : Primeiro ele executa o bloco de código (do) e só depois verifica a condição (while).

b) Uso Comum : Menus de interação onde você precisa exibir as opções ao usuário antes de perguntar se ele deseja sair do programa.

## Estrutura de Lista Encadeada


**1. Árvore Binária**


As Árvores Binárias representam uma *mudança na forma como organizamos dados*, saindo do modelo linear de uma fila ou lista e entrando em um *modelo hierárquico*.

Imagine um ponto central, chamado de raiz, que se ramifica em duas direções. 

Cada nó dessa árvore funciona como uma bifurcação onde, geralmente, organizamos a informação de forma estratégica: valores menores seguem para o caminho da esquerda e valores maiores para o da direita. 

Essa organização não é apenas visual, ela serve para otimizar drasticamente a velocidade de busca, pois a cada decisão tomada, o programa ignora metade dos dados restantes, tornando o processo de encontrar uma informação muito mais eficiente do que percorrer uma lista do início ao fim.


**2. Ponteiros**


Para que estruturas complexas como as árvores funcionem, ou para que o programa gerencie a memória com precisão, utilizamos os *Ponteiros*.

Em vez de lidarem diretamente com o dado final, os ponteiros lidam com a localização desse dado na memória do computador. 

Pense neles como coordenadas de GPS: se você tem uma informação muito pesada e precisa passar para outra parte do programa, é muito mais rápido informar apenas a "latitude e longitude" (o endereço de memória) do que carregar a informação inteira de um lado para o outro. 

Ao usar um ponteiro, o programador ganha o poder de manipular diretamente o que está guardado no hardware, permitindo criar estruturas dinâmicas que crescem ou diminuem de tamanho conforme a necessidade, algo que seria impossível com variáveis estáticas e rígidas.
