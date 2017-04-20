#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_memset(void)
{
	size_t	i_size;
	int		i_c;
	char	str[100];
	char	str_ft[100];
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_memset\n");
	memset(str, 0x42, 100);
	memset(str_ft, 0x42, 100);

	ok = 1;
	for (i_size = 0; i_size < 100; i_size++)
	{
		for (i_c = -1000; i_c < 1000; i_c++)
		{
			ptr = memset(str, i_c, i_size);
			ptr_ft = ft_memset(str_ft, i_c, i_size);
			ok &= test_equal_ptr(ptr, str, i_size, i_c);
			ok &= test_equal_ptr(ptr_ft, str_ft, i_size, i_c);
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
