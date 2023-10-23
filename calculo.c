#include <stdio.h>
#include <string.h>
char *calculaClasse(int *vitorias, int derrotas) {
  char *classe;
  *vitorias = *vitorias - derrotas;
  if (*vitorias <= 10) {
    classe = "Ferro";
  } else if (*vitorias > 10 && *vitorias <= 20) {
    classe = "Bronze";
  } else if (*vitorias > 20 && *vitorias <= 50) {
    classe = "Prata";
  } else if (*vitorias > 50 && *vitorias <= 80) {
    classe = "Ouro";
  } else if (*vitorias > 80 && *vitorias <= 90) {
    classe = "Diamante";
  } else if (*vitorias > 90 && *vitorias <= 100) {
    classe = "Lendário";
  } else {
    classe = "Imortal";
  }
  return classe;
}
int main(void) {
  int vitorias, derrotas;
  char *classe;
  scanf("%d", &vitorias);
  scanf("%d", &derrotas);
  classe = calculaClasse(&vitorias, derrotas);

  printf("O Herói tem de saldo de %d está no nível de %s", vitorias, classe);
  return 0;
}