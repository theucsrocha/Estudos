#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterData(char data[]){
  puts(data);
  for(int i = strlen(data); i >=0; i--){
    printf("%c",data[i]);
    
  }
}