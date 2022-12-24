#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb);

int main() {
  int nb = 16;
  int k = ft_sqrt(nb);
  printf("%i\n", k);
}

int ft_sqrt(int nb) {
  if(nb <= 0) {
    return (0);
  }
  int i = 1;

  while(i * i < nb) {
    i++;
  }
  if(i * i != nb) {
    return(0);
  }

  return(i);
}
