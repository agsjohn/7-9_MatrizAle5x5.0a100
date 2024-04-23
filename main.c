#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 101
#define MAX 5

main(){
  int c, l, l1, c1, m[MAX][MAX], m2[MAX][MAX];
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      m[l][c] = rand() % ALE;
    }
  }
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      m2[c][l] = m[l][c];
    }
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
     if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  printf("\nMatriz resultante: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
     if (c < MAX - 1) {
        printf("%i - ", m2[l][c]);
      }
      else{
        printf("%i\n", m2[l][c]);
      }
    }
  }
  getchar();
}