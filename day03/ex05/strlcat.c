#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void ft_putchar(char *dest);
int ft_strlen(char *c);

int main() {
  unsigned int size = 19;
  char dest[19] = "Hello";
  char src[] = " how are you? What are you doing?";
  unsigned int n = ft_strlcat(dest, src, size);
  printf("%i\n", n);
}	

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
  int j = 0;

  int len_src = ft_strlen(src);
  int len_dest = ft_strlen(dest);
  
  while(j < size - len_dest - 1 && j < len_src) {
    dest[len_dest + j] = src[j];
    j++;
  }
  dest[len_dest + j] = '\0';

  return (len_dest + len_src);
}

int ft_strlen(char *c) {
  int i = 0;
  while(c[i] != '\0') {
    i++;
  }

  return (i);
}

void ft_putchar(char *dest) {
  int c = -1;
  while(dest[++c] != '\0') {
    write(1, &dest[c], 1);
  }
}
