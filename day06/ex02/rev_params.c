#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

int main(int argc, char **argv) {
  while(--argc > 0) {
    ft_putstr(argv[argc]);
    ft_putchar('\n');
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

