#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_memchr(void)
{
	size_t	i_size;
	int		i_c;
	char	c;
	char	str0[100];
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_memchr\n");
	for (c = 0; c < 100; c++)
		str0[(int) c] = c;

	ok = 1;
	for (i_size = 0; i_size < 100; i_size++)
	{
		for (i_c = -1000; i_c < 1000; i_c++)
		{
			ptr = memchr(str0, i_c, i_size);
			ptr_ft = ft_memchr(str0, i_c, i_size);
			ok &= test_equal_ptr(ptr, ptr_ft, i_size, i_c);
			if (!ok)
				break ;
		}
		if (!ok)
			break ;
	}
	if (ok)
		printf("\033[32mSuccess\033[0m\n\n");
	else
		printf("\033[31mFailure\033[0m\n\n");
	return (ok);
}
