#include <stdio.h>
#include "libft.h"
#include "test_equal.h"

int test_ft_strlen(void)
{
	const int	len = 100;
	char	str0[len + 1];
	int		i_size;
	int		i1;
	int		i2;
	int		ok;

	for (i1 = 0; i1 < len; i1++)
		str0[i1] = 'z';

	printf("Testing ft_strlen\n");

	ok = 1;
	for (i_size = len + 1; i_size >= 0; i_size--)
	{
		str0[i_size] = '\0';
		i1 = strlen(str0);
		i2 = ft_strlen(str0);
		ok &= test_equal_long(i1, i2, i_size, 0);
		if (!ok)
			break ;
	}
	if (ok)
		printf("Success\n\n");
	else
		printf("Failure\n\n");
	return (ok);
}
