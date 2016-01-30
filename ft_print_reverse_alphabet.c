#include <unistd.h>

void ft_putchar(void)
{
  int i=122;
	while(i>96)
	{
		char c = i;
		write (1,&c,1);
		i--;
	}
}

int main()
{
  ft_putchar();
  return 0 ;
}
