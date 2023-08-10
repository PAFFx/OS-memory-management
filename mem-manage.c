#include <stdio.h>
#include <stdlib.h>


int a = 10;
int b = 10;
int c = 10;

void stack_mem(int current_epoch, int total_epochs){
  if (current_epoch == total_epochs){
    return;
  }
  int local_var;
  printf("epoch : %d, local_var's address: %p\n", current_epoch, &local_var);
  stack_mem(current_epoch +1, total_epochs);
}

void heap_mem(int total_epochs){
  int* addr[total_epochs];
  for (int i=0; i<total_epochs; i++){
    addr[i] = (int*)malloc(sizeof(int));
    printf("epoch : %d, heap_variable's address: %p\n", i, addr[i]);
  }
  for (int i=0; i<total_epochs; i++){
    free(addr[i]);
  }
}
 

int main(){
  stack_mem(1,5);
  heap_mem(5);
  printf("global variable a's address: %p", &a);
  printf("global variable b's address: %p", &b);
  printf("global variable c's address: %p", &c);
}
