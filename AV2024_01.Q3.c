#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void organizaCaracteresEspeciais(char frase[]){
  char aux;
  int n = strlen(frase);
  for(int i = 0;frase[i] != '\0';i++){
    for(int j = 0; j<n-i-1;j++){
      if((int)frase[j]< 127 && (int)frase[j+1] > 127){
        aux = frase[j+1];
        frase[j+1] = frase[j];
        frase[j] = aux;
        
      }
        
      }
      
    }
  }
