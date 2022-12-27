#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb);

int main() {
  int nb = 11;
  int r = ft_is_prime(nb);
  printf("%i\n", r);
}

int ft_is_prime(int nb) {
  if(nb <= 1) {
    return(1);
  }
  int i = 2;

  while(i < nb / i) {
    if(nb % i == 0) {
      return(0);
    }
    i++;
  }
  return(1);
}
