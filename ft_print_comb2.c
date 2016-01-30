#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_print_comb2(void)
{
  int i = 0;
  while(i<=9)
    {
      int j = 0;
      while(j<=7)
	{
	  int k = 0;
	  while(k<=9)
	    {
	      int l = 0;
	      while(l<=9)
		{
		  if(j!=l)
		    {
		      ft_putchar(i+48);
		      ft_putchar(j+48);
		      ft_putchar(' ');
		      ft_putchar(k+48);
		      ft_putchar(l+48);
		      ft_putchar(',');
		      ft_putchar(' ');
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}


int main()
{
  ft_print_comb2();
  return 0 ;
}
