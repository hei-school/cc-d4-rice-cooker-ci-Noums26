#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "./module/functions.h"

bool status = true;
int choice;

bool is_pluged_in = false;
bool is_switched_on = false;
bool is_there_anything = false;
bool is_cooking = false;

void main(){
  while(status){
    printf("Make your choice: ");
    scanf("%d", &choice);
    switch(choice){
      case 1:
        if(is_pluged_in){
          print_error("Rice Cooker already pluged!");
        } else {
          is_pluged_in = plug_in(is_pluged_in);
        }
        break;
      
      case 2:
        put_something();
        break;
      
      case 3:
        switch_on();
        break;
      
      case 4:
        switch_off();
        break;
      
      case 5:
        empty();
        break;
      
      case 6:
        unplug();
        break;

      case 7:
        status = false;
        break;
      
      default:
        printf("");
        break;
    }
  }
}