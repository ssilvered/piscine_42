#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb);

int main() {
  int f = ft_recursive_factorial(5);
  printf("%i\n", f);
}

int ft_recursive_factorial(int nb) {
  if(nb <= 0 || nb > 12) {
    return(0);
  }
  if(nb == 1) {
    return(1);
  }

  return(nb * ft_recursive_factorial(nb - 1));
}
