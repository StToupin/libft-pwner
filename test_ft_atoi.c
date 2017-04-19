#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "test_equal.h"
#include "test_bruteforce.h"
#include "test_print.h"

int test_ft_atoi(void)
{
	const int	len = 4;
	char	*str0;
	int		i;
	int		i_ft;
	int		ok;

	str0 = bruteforce_new_string(len);

	printf("Testing ft_atoi\n");

	ok = 1;
	do
	{
		i = atoi(str0);
		i_ft = ft_atoi(str0);
		ok &= test_equal_long(i, i_ft, 0, 0);
		if (!ok)
		{
			printf("String sent to ft_atoi: '%s'\n", str0);
			printf("Detail: ");
			print_string_hex(str0, len);
			printf("\n");
			break ;
		}
	} while (bruteforce_increment_string(str0, len));
	free(str0);
	if (ok)
		printf("Success\n\n");
	else
		printf("Failure\n\n");
	return (ok);
}
