#include <stdio.h>
#include <unistd.h>

int ft_strcp(char *s1, char *s2);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_swap(char **str1, char **str2);


int main(int argc, char **argv) {
  int i = 1;

  while(i < argc) {
    int j = 1;
    while(j < argc - i) {
      if(ft_strcp(argv[j], argv[j + 1]) > 0) {
        ft_swap(&argv[j], &argv[j + 1]);
      }
      j++;
    }
    i++;
  }
  i = 1;
  while(i < argc) {
    ft_putstr(argv[i]);
    ft_putchar('\n');
    i++;
  }
}

int ft_strcp(char *s1, char *s2) {
  int i = 0;
  while(s1[i] != '\0' && s2[i] != '\0') {
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

void ft_swap(char **str1, char **str2) {
  char *s = *str1;
  *str1 = *str2;
  *str2 = s;
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
