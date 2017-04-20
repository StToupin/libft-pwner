#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"
#include "test_bruteforce.h"

int test_ft_strcmp(void)
{
	const int	len = 3;
	char	str0[len + 1];
	char	*str1;
	int		i_size;
	int		i;
	int		i_ft;
	char	c;
	int		ok;

	str1 = bruteforce_new_string(len);

	printf("Testing ft_strcmp\n");

	ok = 1;
	do
	{
		for (c = 0; c < len; c++)
			str0[(int) c] = '0' + c;
		for (i_size = len + 1; i_size >= 0; i_size--)
		{
			str0[i_size] = '\0';
			i = strcmp(str0, str1);
			i_ft = ft_strcmp(str0, str1);
			ok &= test_equal_long(i, i_ft, i_size, 0);
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
