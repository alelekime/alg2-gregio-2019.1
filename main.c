#include "jogo.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
char C;
map M1 = inicializa_map(V);
personagem P1 = inicializa_personagem();
sementes S1 = inicializa_mochila();
opcoes(h,M1,P1);

while (P1.saude > 0) {
  scanf("%c",&C);
  opcoes(C,M1,P1);
}
  return 0;
}
