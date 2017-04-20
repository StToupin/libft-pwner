#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"
#include "test_bruteforce.h"

int test_ft_memcmp(void)
{
	const int	len = 3;
	char	str0[len + 1];
	char	*str1;
	size_t	i_size;
	int		i1;
	int		i2;
	char	c;
	int		ok;

	for (c = 0; c < len; c++)
		str0[(int) c] = '0' + c;
	str1 = bruteforce_new_string(len);

	printf("Testing ft_memcmp\n");

	ok = 1;
	do
	{
		for (i_size = 0; i_size < len; i_size++)
		{
			i1 = memcmp(str0, str1, i_size);
			i2 = ft_memcmp(str0, str1, i_size);
			ok &= test_equal_long(i1, i2, i_size, 0);
			if (!ok)
				break ;
		}
		if (!ok)
			break ;
	} while (bruteforce_increment_string(str1, len));
	free(str1);
	if (ok)
		printf("\033[32mSuccess\033[0m\n\n");
	else
		printf("\033[31mFailure\033[0m\n\n");
	return (ok);
}
