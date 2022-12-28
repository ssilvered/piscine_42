#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

int main(int argc, char **argv) {
   ft_putstr(argv[0]);
}

void ft_putstr(char *str) {
   int i = 0;
   while (str[i] != '\0') {
     ft_putchar(str[i]);
     i++;
   }
   ft_putchar('\n');
}

void ft_putchar(char c) {
  write(1, &c, 1);
}
