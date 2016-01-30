#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_print_comb(void)
{
  int i = 0;
  while(i<=9)
    {
      int j = 0;
      while(j<=7)
	{
	  ft_putchar(i+48);
	  ft_putchar(j+48);
	  ft_putchar(',');
	  ft_putchar(' ');
	  j++;
	}
      i++;
    }
}

int main()
{
  ft_print_comb();
  return 0 ;
}
