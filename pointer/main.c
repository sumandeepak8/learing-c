#include <stdio.h>

int main(void){
  int *p, a;
  a = 5;
  p = &a;
  printf("suman");
  printf("the value of *p should be 5 : %d\n",*p);
  printf("should print the address of a as the value of p value of &a %p %p",p ,&a);
}
