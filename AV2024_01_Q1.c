#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
 typedef struct{
  char nome[50];
  int idade;
}dados;

void lerDados(dados lista[]){
for (int i = 0; i < 3; i++) {
  printf("Digite o nome da pessoa %d: ", i + 1);
  fgets(lista[i].nome, 50, stdin);
  lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0'; // Remove newline
  printf("Digite a idade da pessoa %d: ", i + 1);
  scanf("%d", &lista[i].idade);
  while (getchar() != '\n'); // Limpa o buffer do stdin
}
}
void imprimirDados(dados lista[]){
dados aux;
  for(int i = 0; i< 3;i++){
    for(int j = 0; j < 2; j++){
      if(lista[j].idade < lista[j+1].idade){
        aux = lista[j];
        lista[j] = lista[j+1];
        lista[j+1] = aux;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    puts(lista[i].nome);
    printf("Idade: %d\n", lista[i].idade);
  }
}


  




int main(){
 dados lista[3];
  void imprimirDados(dados lista[]);
  void lerDados(dados lista[]);
  lerDados(lista);
  imprimirDados(lista);
  
}