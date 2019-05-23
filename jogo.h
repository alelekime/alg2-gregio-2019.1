typedef struct map {
  char **mapa;
  int lin;
  int col;
  posicao_sementes V[300];
}map;
typedef struct sementes{
  char nome[10];
  float crescimento;
  int ready;
  enum satisfacao s;
}sementes;

typedef struct personagem {
  char nome[20];
  int fome;
  int saude;
  sementes mochila[50];
  int lin;
  int col;
}personagem;

enum colheita {
  PLANTADO,
  COLHER
};

enum satisfacao {
  RUIM = 25, //restaura 25% da fome
  BOM = 50, //restaura 50% da fome
  OTIMO = 75 //restaura 75% da fome
};
typedef struct posicao_sementes {
  sementes s_mapa[150];
  int lin;
  int col;
}posicao_sementes;

typedef struct noFila{
  sementes plantados;
  noFila *anterior;
  noFila *proximo;
}noFila;

map inicializa_map();
personagem inicializa_personagem();
sementes inicializa_mochila(personagem P1, sementes S1);
personagem movimentaca_personagem(map M1,personagem P1);
int opcoes(char C, map M1,personagem P1);
