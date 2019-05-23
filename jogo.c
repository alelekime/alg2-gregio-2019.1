#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*propriedades mapa*/

#define personagem"P"
#define seed "S"
#define parede "#"
#define andar "."
#define plantar "*"

//FUNCOES DE INICIALIZACAO DO JOGO
sementes random_semente( posicao_sementes *mapa.V[pos].s_mapa[pos]. int pos){
  int tipo = 0;
  srand(time(NULL));
  tipo = (rand() % 4);
  switch(tipo){
    case 0:
    V[pos].s_mapa[pos].nome = "Amor";
    V[pos].s_mapa[pos].crescimento = 3;
    V[pos].s_mapa[pos].ready= 0;
    return P1.mochila[0];

    case 1:
    V[pos].s_mapa[pos].nome = "Abobora";
    V[pos].s_mapa[pos].crescimento = 7;
    V[pos].s_mapa[pos].ready= 0;
    return P1.mochila[0];

    case 2:
    V[pos].s_mapa[pos].nome = "Fruto do Conde";
    V[pos].s_mapa[pos].crescimento = 10;
    V[pos].s_mapa[pos].ready= 0;
    return P1.mochila[0];

    case 3:
    V[pos].s_mapa[pos].nome = "Discordia";
    V[pos].s_mapa[pos].crescimento = 12;
    V[pos].s_mapa[pos].ready= 0;
    return P1.mochila[0];

  }
}
mapa inicializa_map(posicao_sementes *V){
  map mapa;
  int pos = 0;
  FILE *GRADE = fopen ("data.txt","r");

  if (GRADE == NULL){
    printf("ERRO NO ARQUIVO\n", );
    break;
  }
  else{
    fscanf(GRADE,"%i %i", &mapa.lin,&mapa.col);
     int **mapa = malloc (mapa.lin * sizeof(int));
    for (int i = 0; i < mapa.lin; i++) {
      mapa.mapa[i] = malloc (mapa.col *sizeof(int));
    }
  }
  for (size_t i = 0; i < map.lin; i++) {
    for (size_t j = 0; j < map.col; j++) {
      fscanf(GRADE, "%i",mapa.mapa[i][j]);
      if (strcmp(mapa.mapa[i][j], seed)) {
        mapa.V[pos].lin = i;
        mapa.V[pos].col = j;
        mapa.V[pos].s_mapa = random_semente(mapa.V[pos].s_mapa[pos]);
      }
    }
  }
  return M1; //ERRO
}
personagem inicializa_personagem(map M1,personagem P1) {
  printf("NOME DO PERSONAGEM\n");
  scanf("%s", P1.nome);
  P1.fome = 0;
  P1.saude = 100;
  srand(time(NULL));
  P1.lin = (rand() % M1.lin);
  P1.col = (rand() % M1.col);
  M1.mapa[P1.lin][P1.col] = personagem;
  return 0;
}
sementes inicializa_mochila(personagem P1, sementes S1){
  int tipo = 0;
  srand(time(NULL));
  tipo = (rand() % 4);
  switch(tipo){
    case 0:
    S1.mochila[0].nome = "Amor";
    S1.mochila[0].crescimento = 3;
    S1.mochila[0].ready= 0;
    return P1.mochila[0];

    case 1:
    S1.mochila[0].nome = "Abobora";
    S1.mochila[0].crescimento = 7;
    S1.mochila[0].ready= 0;
    return P1.mochila[0];

    case 2:
    S1.mochila[0].nome = "Fruto do Conde";
    S1.mochila[0].crescimento = 10;
    S1.mochila[0].ready= 0;
    return P1.mochila[0];

    case 3:
    S1.mochila[0].nome = "Discordia";
    S1.mochila[0].crescimento = 12;
    S1.mochila[0].ready= 0;
    return P1.mochila[0];

  }
}
//FUNCOES DO JOGO
int opcoes(char C, map M1,personagem P1) {
  if (strcmp(C,"h") == 0) { //HELP
    printf("ESCOLHA UMA DAS OPCOES VALIDAS\n");
    printf("1 - ANDAR:\n");
    printf("    A - ESQUERDA\n");
    printf("    D - DIREITA\n");
    printf("    S - BAIXO\n");
    printf("    W - CIMA\n");
    printf("2 - OBSERVAR\n");
    printf("3 - COLHER\n");
    printf("4 - PLANTAR\n");
    printf("5 - COMER\n");
  } else if (strcmp(C,"1") == 0) {  // ANDAR
    personagem_movimentacao(M1, P1);
  } else if  (strcmp(C,"2") == 0){  //OBSERVAR
    personagem_observar();
  } else if  (strcmp(C,"3") == 0){  //COLHER
    personagem_colher();
  } else if  (strcmp(C,"4") == 0){  //PLANTAR
    personagem_plantar();
  } else if  (strcmp(C,"5") == 0){  //COMER
    personagem_comer(M1, P1);
  }
  return 0;
}
personagem personagem_movimentacao(map M1,personagem P1){
  char C;
  scanf("%c\n",&C);
  switch (C) {
    case A:
      if (P1.col != 0) {
        P1.col--;
      }
    case S:
      if (P1.lin != M1.lin) {
        P1.lin++;
      }
    case W:
      if (P1.lin != 0) {
        P1.lin--;
      }
    case D:
      if ((P1.col != M1.col)) {
        P1.col++;
      }
    default:
    printf("ESCOLHA UMA DIRECAO VALIDA\n");
    personagem_movimentacao(M1, P1);
  return P1;
  }
}

personagem
