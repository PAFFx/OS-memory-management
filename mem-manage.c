#include <stdio.h>


void stack_mem(int current_epoch, int total_epochs){
  if (current_epoch == total_epochs){
    return;
  }
  int local_var;
  printf("epoch : %d, local_var's address: %x\n", current_epoch, &local_var);
  stack_mem(current_epoch +1, total_epochs);
}


int main(){
  stack_mem(1,5);
}
