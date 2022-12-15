#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find);
void ft_putchar(char *dest);

int main() {
  char str[20] = "123456789";
  char to_find[20] = "34";
  ft_putchar(ft_strstr(str, to_find));
}

char *ft_strstr(char *str, char *to_find) {
  int i;
  int j;
  i = 0;
  if (to_find[0] == '\0') {
    return (str);
  }
  while (str[i] != '\0') {
    j = 0;
    while (str[i + j] == to_find[j]) {
      j++;
      if(to_find[j] == '\0') {
        return(&str[i]);
      }
    }
    i++;
  }
  return (NULL);
}

void ft_putchar(char *dest) {
  int c = -1;
  while(dest != NULL && dest[++c] != '\0') {
    write(1, &dest[c], 1);
  }
}
