#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int i, a, b, n, encontrado = 0;
   int aleatorio[30];

  printf("Digite a:");
  scanf("%d", &a);
  printf("Digite b:");
  scanf("%d", &b);
  while(b > 20|| b<1){
    printf("Digite b:");
    scanf("%d", &b);
  }
  srand(a);
  printf("Numeros gerados:");
  for(i=0 ; i < 30; i++){
  aleatorio[i] = rand() % 20+1;
  printf("%d ", aleatorio[i]);
  }
    
    for(i=0 ; i < 30; i++){
      if(aleatorio[i] == b){
      encontrado = encontrado + 1;
      }
    }
  printf("\n");
  if(encontrado == 0){
    printf("O valor nao foi encontrado ");
  }
  else{
    printf("O valor foi encontrado %d vezes", encontrado);
  }
  return 0;

}