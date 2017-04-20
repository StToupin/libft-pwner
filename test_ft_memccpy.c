#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_memccpy(void)
{
	size_t	i_size;
	int		i_c;
	char	c;
	char	str0[100];
	char	str[100];
	char	str_ft[100];
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_memccpy\n");
	memset(str, 0x42, 100);
	memset(str_ft, 0x42, 100);
	for (c = 0; c < 100; c++)
		str0[(int) c] = c;

	ok = 1;
	for (i_size = 0; i_size < 100; i_size++)
	{
		for (i_c = -1000; i_c < 1000; i_c++)
		{
			ptr = memccpy(str, str0, i_c, i_size);
			ptr_ft = ft_memccpy(str_ft, str0, i_c, i_size);
			if (ptr == NULL)
				ok &= test_equal_ptr(ptr, ptr_ft, i_size, i_c);
			else
				ok &= test_equal_long(ptr - str, ptr_ft - str_ft, i_size, i_c);
			ok &= test_equal_array(str, str_ft, 100, i_size, i_c);
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
