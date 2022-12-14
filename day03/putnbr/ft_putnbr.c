#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void ft_putnbr(int n);
void ft_putchar(char c);

int main() {
  ft_putnbr(-2147483648);
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
