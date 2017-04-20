#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_strncpy(void)
{
	int		i_size;
	int		i_size2;
	char	c;
	char	str0[100];
	char	str[100];
	char	str_ft[100];
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_strncpy\n");
	for (c = 0; c < 100; c++)
		str0[(int) c] = c + 12;

	ok = 1;
	for (i_size = 99; i_size >= 0; i_size--)
	{
		for (i_size2 = 0; i_size2 < 99; i_size2++)
		{
			memset(str, 0x42, 100);
			memset(str_ft, 0x42, 100);
			str0[i_size] = 0;
			ptr = strncpy(str, str0, i_size2);
			ptr_ft = ft_strncpy(str_ft, str0, i_size2);
			ok &= test_equal_ptr(ptr_ft, str_ft, i_size, i_size2);
			ok &= test_equal_array(ptr, ptr_ft, 100, i_size, i_size2);
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
