#include <stdio.h>
#include "test_libft.h"
#include "libft.h"

char	*bruteforce_new_string(size_t len)
{
	return (ft_strnew(len));
}

int		bruteforce_increment_string(char *str, size_t len)
{
	size_t i;
	unsigned char *ustr;

	ustr = (unsigned char*)str;
	for (i = 0; ustr[i] == 255; i++)
		ustr[i] = 0;
	if (i == len)
		return (0);
	ustr[i]++;
	return (1);
}

void	bruteforce_test(void)
{
	const size_t len = 2;
	char *str;

	str = bruteforce_new_string(len);
	while (1)
	{
		print_string_hex(str, len);
		printf("\n");
		if (!bruteforce_increment_string(str, len))
			break ;
	}
}
