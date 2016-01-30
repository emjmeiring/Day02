#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_putnbr(int nb)
{
  int a = nb%10;
  int b = nb/10;
  ft_putchar('"');
  ft_putchar(b+48);
  ft_putchar(a+48);
  ft_putchar('"');
}

int main()
{
  ft_putnbr(42);
  return 0 ;
}
