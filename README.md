---------------------------------------------------------
# Manual de Instalação
[Dev-C++ 5.0 beta 9.2 (4.9.9.2) with Mingw/GCC 3.4.2 compiler and GDB 5.2.1 debugger](https://www.dev-cpp.com/)

## Funções Básicas
**1. If, else if, else**

As funções if, else if e else criam condições que permitem ao programa decidir qual bloco de código executar com base em um valor booleano.

  a) If : O ponto de partida. Executa o código apenas se a condição for verdadeira.
  
  b) Else if : Permite testar uma nova condição caso a anterior tenha sido falsa. Você pode usar vários destes em sequência.
  
  c) Else : O "plano B". Executa um bloco de código caso nenhuma das condições anteriores seja atendida.


**2. Switch**

O Switch é uma alternativa do if else quando você tem uma única variável que precisa ser comparada com vários valores constantes.

  a) Vantagem : É mais fácil de ler e pode ser mais performático em listas longas de opções.
  
  b) Break : Essencial para "parar" a execução assim que o caso correto for encontrado, evitando que o código execute os casos de baixo acidentalmente.
  
  c) Default : Funciona como o else, sendo o caminho padrão caso nenhum case coincida.


**4. Do While**

Diferente do loop while comum (que verifica a condição antes de começar), o Do While garante que o código seja executado pelo menos uma vez.

a) Lógica : Primeiro ele executa o bloco de código (do) e só depois verifica a condição (while).

b) Uso Comum : Menus de interação onde você precisa exibir as opções ao usuário antes de perguntar se ele deseja sair do programa.
