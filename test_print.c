#include <stdio.h>
#include "libft.h"

void	print_string_hex(char *str, int len)
{
	int i;
	int first;
	unsigned char *ustr;

	ustr = (unsigned char*)str;
	first = 1;
	printf("[");
	for (i = 0; i < len; i++)
	{
		if (!first)
			printf(", ");
		printf("%02x", ustr[i]);
		first = 0;
	}
	printf("]");
}
