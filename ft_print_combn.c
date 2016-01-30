#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_print_combn(int n)
{
  int a = 0;
  while(a<=8)
    {
      int b= a+1;
      while(b<=9)
	{
	  ft_putchar(a+48);
	  ft_putchar(b+48);
	  ft_putchar(',');
	  ft_putchar(' ');
	  b++;
	}
      a++;
    } 
}

int main()
{
  ft_print_combn(2);
  return 0 ;
}
