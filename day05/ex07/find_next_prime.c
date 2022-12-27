#include <stdio.h>
#include <unistd.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main() {
  int nb = 8;
  int r = ft_find_next_prime(nb);
  printf("%i\n", r);
}

int ft_find_next_prime(int nb) {
  while (!ft_is_prime(nb)) {
    nb++;
  }
  return (nb);
}

int ft_is_prime(int nb) {
  if(nb <= 1) {
    return(1);
  }
  int i = 2;

  while(i < nb / 2) {
    if(nb % i == 0) {
      return(0);
    }
    i++;
  }
  return(1);
}
