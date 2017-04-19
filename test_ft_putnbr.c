#include <stdio.h>
#include "libft.h"

void	test_ft_putnbr(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(0x7fffffff);
	printf("\n");
	ft_putnbr(0x80000000);
	printf("\n");
	ft_putnbr(0xffffffff);
	printf("\n");
}


