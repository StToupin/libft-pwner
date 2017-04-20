#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_memmove(void)
{
	size_t	i_size;
	int		i_shift;
	char	str[100];
	char	str_ft[100];
	char	c;
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_memmove\n");

	ok = 1;
	for (i_size = 0; i_size < 50; i_size++)
	{
		for (i_shift = 0; i_shift + i_size < 100; i_shift++)
		{
			for (c = 0; c < 100; c++)
			{
				str[(int) c] = c;
				str_ft[(int) c] = c;
			}
			ptr = memmove(str + 50, str + i_shift, i_size);
			ptr_ft = ft_memmove(str_ft + 50, str_ft + i_shift, i_size);
			ok &= test_equal_long(ptr - str, ptr_ft - str_ft, i_size, i_shift);
			ok &= test_equal_array(str, str_ft, 100, i_size, i_shift);
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
