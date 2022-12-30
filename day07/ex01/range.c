#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max);
void ft_putnbr(int n);
void ft_putchar(char c);

int main() {
  int min = 1;
  int max = 8;
  int i = 0;
  int *num = ft_range(min, max);
  while(i < max - min) {
    ft_putnbr(num[i]);
    i++;
  }
}

int *ft_range(int min, int max) {
  if(min >= max) {
    return(NULL);
  }
  int *rez = (int *)malloc(sizeof(int) * (max - min));
  int i = 0;
  
  while(min < max) {
    rez[i] = min;
    i++;
    min++;
  }
  
  return(rez);
}

void ft_putnbr(int n) {
  if (n == -2147483648) {
      ft_putchar('-');
      ft_putchar('2');
      n = 147483648;
  }
  if (n < 0) {
    ft_putchar('-');
    n = -n;
    printf("\n%i\n", n);
  }
  int f = 1;
  int temp = n;
  
  while(n > 10) {
    f = f * 10;
    n = n / 10;
  }
  while(temp > 0) {
    int d = temp / f;
    temp = temp % f;
    ft_putchar(d + 48);
    f = f / 10;
  }
}

void ft_putchar(char c) {
  write(1, &c, 1);
}

