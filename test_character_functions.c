#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void test_character_functions(void)
{
	int i;
	int j;
	int res;
	int res_ft;
	int (*ft_f[])(int) = {&ft_isupper, &ft_islower, &ft_isalpha, &ft_isdigit,
		&ft_isalnum, &ft_isascii, &ft_isprint, &ft_toupper, &ft_tolower};
	int (*f[])(int) = {&isupper, &islower, &isalpha, &isdigit,
		&isalnum, &isascii, &isprint, &toupper, &tolower};
	char *fnames[] = {"isupper", "islower", "isalpha", "isdigit",
		"isalnum", "isascii", "isprint", "toupper", "tolower"};
	int	all_good;

	all_good = 1;
	for (i = -1000; i < 1000; i++)
	{
		for (j = 0; j < 9; j++)
		{
			res = (*f[j])(i);
			res_ft = (*ft_f[j])(i);
			if (res != res_ft)
			{
				printf("Mismatch:\n");
				printf(" %s(%d) => %d\n", fnames[j], i, res);
				printf(" ft_%s(%d) => %d\n", fnames[j], i, res_ft);
				all_good = 0;
			}
		}
	}
	if (all_good)
		printf("Fonctions sur les caracteres: tout est bon\n");
}
