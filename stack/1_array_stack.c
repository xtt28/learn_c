#include <stdio.h>
#include <stdlib.h>

struct stack {
  size_t num;
  size_t capacity;
  int* values;
};

typedef struct stack stack;

void stack_expand(stack* st) {
  st->capacity *= 2;
  st->values = realloc(st->values, st->capacity * sizeof(int));
}

int stack_push(stack* st, int value) {
  if (st->num >= st->capacity) {
    stack_expand(st);
  }
  st->values[st->num++] = value;
  
  return value;
}

int stack_pop(stack* st) {
  int tmp = st->values[st->num - 1];
  st->values[st->num - 1] = 0;
  st->num--;
  
  return tmp;
}

stack* stack_create() {
  stack* st = malloc(sizeof(stack));
  st->num = 0;
  st->values = malloc(sizeof(int));
  st->capacity = 1;
  return st;
}

void stack_free(stack* st) {
  free(st->values);
  free(st);
}

int main(void) {
  stack* st = stack_create();
  stack_push(st, 5);
  stack_push(st, 3);
  stack_push(st, 12);
  stack_push(st, 200);
  stack_push(st, 2);
  stack_push(st, 50);
  stack_push(st, 31);
  stack_push(st, 19);

  printf("num of elements: %zu\n", st->num);
  printf("size of array: %zu\n", st->capacity);
  printf("pop: %d\n", stack_pop(st));
  printf("pop: %d\n", stack_pop(st));

  stack_push(st, 20);
  stack_push(st, 300);
  stack_push(st, 1900);
  stack_push(st, 3);

  printf("size of array: %zu\n", st->capacity);

  stack_free(st);
  return 0;
}
