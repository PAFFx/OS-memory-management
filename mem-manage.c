#include <stdio.h>


void recurse(int current_epoch, int total_epochs){
  if (current_epoch == total_epochs){
    return;
  }
  int local_var;
  printf("epoch : %d, local_var's address: %x\n", current_epoch, &local_var);
  recurse(current_epoch +1, total_epochs);
}

int main(){
  recurse(1,5);
}
