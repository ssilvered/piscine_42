#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index);

int main() {
  int index = 6;
  int rez = ft_fibonacci(index);
  printf("%i\n", rez); 
}

int ft_fibonacci(int index) {
  if(index < 0) {
    return(-1);
  }
  else if(index == 0) {
    return(0);
  }
  else if(index == 1) {
    return(1);
  }
  else {
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
  }
}
