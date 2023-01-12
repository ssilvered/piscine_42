#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);
void ft_putchar(char c);
void ft_putstr(char *str);
int getLengthOfArray(int size, char **arr);
int getLengthOfSep(int size, char *sep);
int ft_strlen(char *str);

int main(int argc, char **argv) {
  if (argc > 1) {
    ft_putstr(ft_strjoin(argc - 2, &argv[1], 
			   argv[argc - 1]));
  }   
}

char *ft_strjoin(int size, char **strs, char *sep) {
  if(size == 0) {
    return(NULL);
  }
  int strLen = getLengthOfArray(size, strs) + 
	       getLengthOfSep(size, sep);
  char *fio = (char *)malloc(strLen * sizeof(char) + 1);
  int i = 0;
  int c = 0;
  int j;

  while(i < size) {
    j = 0;
    while(strs[i][j] != '\0') {
      fio[c++] = strs[i][j++]; 
    }
    j = 0;
    while(sep[j] != '\0' && i != size - 1) {
      fio[c++] = sep[j++];
    }
    i++;
  }
  fio[c] = '\0';

  return (fio);
}

int getLengthOfSep(int size, char *sep) {
  return (ft_strlen(sep) * (size - 1));
}

int getLengthOfArray(int size, char **arr) {
  int i = 0;
  int sum = 0;

  while(i < size) {
    sum = sum + ft_strlen(arr[i]);
    i++;
  }

  return (sum);
}

int ft_strlen(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    i++;
  }

  return (i);
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
