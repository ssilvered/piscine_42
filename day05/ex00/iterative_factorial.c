#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main () {
  int f = ft_iterative_factorial(5);
  printf("%i\n", f);
}

int ft_iterative_factorial(int nb) {
  if(nb < 0 || nb > 12) {
    return 0;
  }
  int rez = 1;
  int i = 2;
  while(i <= nb) {
    rez = i * rez;
    i++;
  }
  return (rez);
}
