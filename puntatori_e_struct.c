#include <stdio.h>
#include <stdlib.h>
struct Books{
  char title[64];
  int duration;
}

void cambia_id(struct Books*);

int main() {
  struct Books pippo;
  struct Books* p_pippo = &pippo;
  pippo.duration=4;
  cambia_id(p_pippo);
  printf("Durata di pippo %d minuti\n",pippo.duration);

}
void cambia_id(struct Books* pluto)
{
  pluto-> duration =5;
}
