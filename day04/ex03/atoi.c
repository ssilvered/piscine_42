#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c);
int ft_atoi(char *str);

int main() {
  char str[] = "123";
  int i = ft_atoi(str);
  printf("%i\n", i);
}

int ft_atoi(char *str) {
  int i = 0;
  while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r') {
    i++;
  }
  int n = 1;
  if(str[i] == '-') {
    n = -1;
  }
  while(str[i] == '-' || str[i] == '+') {
    i++;
  }
  int rez = 0;
  while(str[i] >= '0' && str[i] <= '9') {
    int nbr = str[i] - 48;
    rez = (rez * 10) + nbr;
    i++;
  }
  
  return (rez * n);
}

void ft_putchar(char c) {
  write(1, &c, 1);
}
