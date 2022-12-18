#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int n);
void ft_putchar(char c);

int main() {
  ft_putnbr(2356);
}

void ft_putnbr(int n) {
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
