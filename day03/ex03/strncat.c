#include <stdio.h>
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int n);
void ft_putchar(char *dest);

int main() {
  char dest[30] = "Hello";
  char src[] = "Hello, how are you?";
  unsigned int n = 100;
  ft_strncat(dest, src, n);
  ft_putchar(dest);
}

char *ft_strncat(char *dest, char *src, unsigned int n) {
  int i = 0;
  int j = 0;

  while(dest[i] != '\0') {
    i++;
  }
  while(j < n && src[j] != '\0') {
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
