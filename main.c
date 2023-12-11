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
          print_error("Rice Cooker is already pluged!");
        } else {
          is_pluged_in = plug_in();
        }
        break;
      
      case 2:
        if(is_there_anything){
          print_error("Something is already there !");
        } else {
          is_there_anything = put_something();
        }
        break;
      
      case 3:
        if(is_there_anything && is_pluged_in){
          is_cooking = switch_on();
          is_switched_on = is_cooking;
        } else {
          print_error("You've forgotten some steps !");
        }
        break;
      
      case 4:
        if(is_cooking && is_switched_on){
          is_cooking = switch_off();
          is_switched_on = is_cooking;
        } else {
          print_error("Rice Cooker is already off !");
        }
        break;
      
      case 5:
        if(!is_there_anything){
          print_error("Something is already empty !");
        } else if (is_cooking) {
          print_error("Something is already cooking !");
        } else {
          is_there_anything = empty();
        }
        break;
      
      case 6:
        if(!is_pluged_in){
          print_error("Rice Cooker is already unpluged !");
        } else if (is_switched_on || is_cooking) {
          print_error("Rice Cooker is already switched on !");
        } else {
          is_pluged_in = unplug();
        }
        break;

      case 7:
        print_result("Bye !");
        status = false;
        break;
      
      default:
        printf("");
        break;
    }
  }
}