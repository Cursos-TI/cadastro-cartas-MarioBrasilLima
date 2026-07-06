#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //variaveis carta 1
  char estadocarta1[20];
  char codigocarta1[20];
  char nomecidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontost1;

  //variaveis carta2

  char estadocarta2[20];
  char codigocarta2[20];
  char nomecidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontost2;


  // Utilizados nomes significativos para definir cada variavel do super trunfo
  //vamos usar esse espaco para uma saida de dados inicializando o jogo com uma breve orientação para o jogador
  printf("Bem vindo ao Super Trunfo, vamos começar a jogar?!\n\nPara isso, precisamos primeiro cadastrar nossas cartas, vamos começar cadastrando 2 Cartas, não se preocupe, é bastante simples\n");
  printf("eu vou lhe fazer algumas perguntas e fico responsavel por criar as cartas usando as informações que for me passando.\n\n");
  // Área para entrada de dados
  printf("Primeiro, vamos definir os Estados, usaremos uma letra entre A e H do nosso alfabeto, por favor, informe qual letra representará o Estado da primeira carta: \n");
  scanf("%s", estadocarta1);
  printf("Muito bem, agora vamos definir a letra que vai representar a nossa segunda carta: \n");
  scanf("%s", estadocarta2);
  // Área para exibição dos dados da cidade

  printf("A letra definidas para a Carta 1 foi %s e para a Carta 2 foi %s\n", estadocarta1, estadocarta2);
return 0;
} 
