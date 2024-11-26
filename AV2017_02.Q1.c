#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct maior{
  char maior;
  char menor;
}maior;

int comparacao(int n1, int n2){
  char string1[20];
  char string2[20];
  sprintf(string1, "%d", n1);
  sprintf(string2, "%d", n2);
  int tam = strlen(string1);
  maior resul[strlen(string1)];
  for(int i = strlen(string1); i >= 0; i--){
    if((string1[i] - '0') > (string2[i] - '0')){
      resul[i].maior = string1[i] - '0';
      resul[i].menor = string2[i] - '0';
    }
    else{
      resul[i].maior = string2[i] - '0';
      resul[i].menor = string1[i] - '0';
    }
  }
  return tam;
}
void gerador(maior * resul,int tam){
  char resultado[tam * 2];
  for(int i = tam * 2, j = 0;i>=0;i = i - 2,j++){
    resultado[i] = resul[j].menor;
    resultado[i-1] = resul[j].maior;
  }
  
}

