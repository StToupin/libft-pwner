#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_strlcat(void)
{
	int		i_size;
	int		i_size2;
	char	c;
	char	str0[100];
	char	str[100];
	char	str_ft[100];
	size_t	res;
	size_t	res_ft;
	size_t	n;
	int		ok;

	printf("Testing ft_strlcat\n");
	for (c = 0; c < 100; c++)
		str0[(int) c] = c + 12;

	ok = 1;
	for (i_size = 99; i_size > 0; i_size--)
	{
		for (i_size2 = 0; i_size + i_size2 < 100; i_size2++)
		{
			for (n = 0; n < 100; n++)
			{
				memset(str, 0x42, 100);
				memset(str_ft, 0x42, 100);
				str0[i_size] = 0;
				str[i_size2] = 0;
				str_ft[i_size2] = 0;
				res = strlcat(str, str0, n);
				res_ft = ft_strlcat(str_ft, str0, n);
				ok &= test_equal_long(res, res_ft, i_size, i_size2);
				ok &= test_equal_array(str, str_ft, i_size + i_size2 + 1, i_size, i_size2);
				if (!ok)
					break ;
			}
			if (!ok)
				break;
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
