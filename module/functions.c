#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

bool plug_in(){
  printf("Rice cooker pluged\n");
  return true;
}

bool unplug(){
  printf("Rice cooker unpluged\n");
  return true;
}

bool put_something(){
  printf("Something is there\n");
  return false;
}

bool empty(){
  printf("Rice cooker off\n");
  return false;
}

bool switch_on(){
  printf("Rice cooker on\n");
  return true;
}

bool switch_off(){
  printf("Rice cooker off\n");
  return false;
}

void print_error(char msg[]){
  printf("/!\\ ---------------------------------- /!\\\n");
  fprintf(stderr, "%s \n", msg);
  printf("/!\\ ---------------------------------- /!\\\n");
}
