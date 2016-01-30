#include <unistd.h>

void ft_putchar(void)
{
  int i=97;
    while(i<123)
      {
	char c = i;
	write (1,&c,1);
	i++;
      }
}

int main()
{
  ft_putchar();
  return 0 ;
}
