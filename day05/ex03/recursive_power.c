#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power);

int main() {
  int nb = 5;
  int power = 3;
  int r = ft_recursive_power(nb, power);
  printf("%i\n", r);
}

int ft_recursive_power(int nb, int power) {
  if(power < 0) {
    return(0);
  }
  if(nb == 0 && power == 0) {
    return(1);
  }
  if(power == 0) {
    return(1);
  }

  return(nb * ft_recursive_power(nb, power - 1));  
}
