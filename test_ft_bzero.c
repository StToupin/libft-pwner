#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_bzero(void)
{
	size_t	i_size;
	char	str[100];
	char	str_ft[100];
	int		ok;

	printf("Testing ft_bzero\n");
	memset(str, 0x42, 100);
	memset(str_ft, 0x42, 100);

	ok = 1;
	for (i_size = 0; i_size < 100; i_size++)
	{
		bzero(str, i_size);
		ft_bzero(str_ft, i_size);
		ok &= test_equal_array(str, str_ft, 100, i_size, 0);
		if (!ok)
			break ;
	}
	if (ok)
		printf("\033[32mSuccess\033[0m\n\n");
	else
		printf("\033[31mFailure\033[0m\n\n");
	return (ok);
}
