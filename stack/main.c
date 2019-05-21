#include <stdio.h>

struct Stack
{
  int x;
  struct Stack *next;
};

void add(int x, struct Stack *stack)
{
  (*stack).x = x;
  struct Stack next;
  (*stack).next = &next;
}

int main()
{
  struct Stack stack;
  add(8, &stack);
  return 0;
}