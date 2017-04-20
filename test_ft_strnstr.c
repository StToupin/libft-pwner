#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"
#include "test_bruteforce.h"

int test_ft_strnstr(void)
{
	const int	len = 3;
	char	str0[len + 1];
	char	*str1;
	int		i_size;
	size_t	i_size2;
	char*	ptr;
	char*	ptr_ft;
	char	c;
	int		ok;

	str1 = bruteforce_new_string(len);

	printf("Testing ft_strnstr\n");

	ok = 1;
	do
	{
		for (c = 0; c < len; c++)
			str0[(int) c] = '0' + c;
		for (i_size = len + 1; i_size >= 0; i_size--)
		{
			for (i_size2 = 0; i_size2 < len; i_size2++)
			{
				str0[i_size] = '\0';
				ptr = strnstr(str0, str1, i_size2);
				ptr_ft = ft_strnstr(str0, str1, i_size2);
				ok &= test_equal_ptr(ptr, ptr_ft, i_size, i_size2);
				if (!ok)
					break ;
			}
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
