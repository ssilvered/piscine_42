#include <stdio.h>
#include <unistd.h>

char *ft_strcat(char *dest, char *src);
void ft_putchar(char *dest);

int main() {
  char dest[16] = "Hello";
  char src[10] = " it's me";
  ft_strcat(dest, src);
  ft_putchar(dest);
}

char *ft_strcat(char *dest, char *src) {
  int i = 0;
  int j = 0;

  while(dest[i] != '\0') {
    i++;
  }
  while(src[j] != '\0') {
    dest[i] = src[j];
    j++;
    i++;
  }

  dest[i] = '\0';
  return (dest);
}

void ft_putchar(char *dest) {
  int c = -1;
  while(dest[++c] != '\0') {
    write(1, &dest[c], 1);
  }
}
