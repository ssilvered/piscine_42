#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int ft_strncp(char *s1, char *s2, unsigned int n);
void ft_putchar(char *str);

int main() {
  char s1[] = "Password safe";
  char s2[] = "Passord safe";
  unsigned int n = 8;
  int x = ft_strncp(s1, s2, n);
  printf("%i\n", x);
}

int ft_strncp(char *s1, char *s2, unsigned int n) {
  int i = 0;
  
  while(s1[i] != '\0' && s2[i] != '\0' && i < n) {
    if(s1[i] > s2[i]) {
      return 1;
    }
    if(s1[i] < s2[i]) {
      return -1;
    }
    i++;
  }
  if(s1[i] == '\0' && s2[i] != '\0') {
    return -2;
  }
  if(s2[i] == '\0' && s1[i] != '\0') {
    return 2;
  }

  return 0;
}
  

void ft_putchar(char *str) {
  int c = -1;
  while(str[++c] != '\0') {
    write(1, &str[c], 1);
  }
}
