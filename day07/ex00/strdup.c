#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strdup(char *src);
int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putchar(char c);

int main() {
  char *src = "Tanya";
  ft_putstr(ft_strdup(src));
}

char *ft_strdup(char *src) {
  int i = 0;
  int len = ft_strlen(src);
  
  if(src == NULL) {
    return(NULL);
  }
  char *str = (char *)malloc(len * sizeof(char));
  while(src[i] != '\0') {
    str[i] = src[i];
    i++;
  }
  str[i] = '\0';

  return(str); 
}

int ft_strlen(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    i++;
  }
  
  return(i);
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
