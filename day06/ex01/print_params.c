#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

int main(int argc, char **argv) {
  int i = 1;

  while(i < argc) {
    ft_putstr(argv[i]);
    ft_putchar('\n');
    i++;
  }
}

void ft_putstr(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    ft_putchar(str[i]);
    i++;
  }  
}

void ft_putchar(char c) {
  write(1, &c, 1);
}
