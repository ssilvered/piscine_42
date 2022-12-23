#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power);

int main() {
  int nb = 5;
  int power = 2;
  int r = ft_iterative_power(nb, power);
  printf("%i\n", r);
}

int ft_iterative_power(int nb, int power) {
  if(power < 0) {
    return (0);
  }
  if(nb == 0 && power == 0) {
    return (1);
  }  

  int rez = nb;

  while(power > 1) {
    rez = nb * rez;
    power--;
  }
  return (rez);
}
