#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_strdup(void)
{
	int		i_size;
	char	c;
	char	str0[100];
	char	*ptr;
	char	*ptr_ft;
	int		ok;

	printf("Testing ft_strdup\n");
	for (c = 0; c < 100; c++)
		str0[(int) c] = c + 12;

	ok = 1;
	for (i_size = 100; i_size >= 0; i_size--)
	{
		str0[i_size] = 0;
		ptr = strdup(str0);
		ptr_ft = ft_strdup(str0);
		ok &= test_equal_array(ptr, ptr_ft, i_size, i_size, 0);
		free(ptr);
		free(ptr_ft);
		if (!ok)
			break ;
	}
	if (ok)
		printf("\033[32mSuccess\033[0m\n\n");
	else
		printf("\033[31mFailure\033[0m\n\n");
	return (ok);
}
