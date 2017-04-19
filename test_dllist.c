#include <stdio.h>
#include "libft.h"

void	print_dllist(t_dllist *list)
{
	t_dlelem	*elem;

	printf("First: '%s'\n", list->first->content);
	printf("Last: '%s'\n", list->last->content);
	printf("Len: '%lu'\n\n", list->len);

	if (list->len > 0)
	{
		elem = list->first;
		while (elem != NULL)
		{
			printf("Element '%s'\n", elem->content);
			if (elem->prev)
				printf("  prev: '%s'\n", elem->prev->content);
			if (elem->next)
				printf("  next: '%s'\n", elem->next->content);
			elem = elem->next;
		}
	}
}

void test_dllist(void)
{
	t_dllist	*list;

	list = ft_dllist_create();
	ft_dllist_pushfront(list, "abc");
	ft_dllist_pushfront(list, "def");
	ft_dllist_pushfront(list, "ghi");
	ft_dllist_pushback(list, "ABC");
	ft_dllist_pushback(list, "DEF");
	ft_dllist_pushback(list, "GHI");

	print_dllist(list);
	printf("\n\nRemoving '%s'\n", ft_dllist_popfront(list));
	print_dllist(list);
	printf("\n\nRemoving '%s'\n", ft_dllist_popback(list));
	print_dllist(list);
}