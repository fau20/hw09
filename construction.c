#include <stdio.h>
#include <stdlib.h>

struct spend {char *food; int price;};

void print_spend(struct spend *f) {
  printf("food: %s\tcost: %d\n", f->food, f->price);
}

struct spend * make_spend(char *food, int price){
  struct spend *s = malloc(sizeof(struct spend));
  s->food = food;
  s->price = price;

  return s;
}

int main() {
  struct spend *w = make_spend("pizza", 3);
  print_spend(w);

  free(w);

  return 0;

}
