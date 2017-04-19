#include <stdio.h>

int	test_equal_long(long l1, long l2, int i1, int i2)
{
	if (l1 == l2)
		return (1);
	printf("(%d, %d): long numbers not equal: l1 = %ld, l2 = %ld\n", i1, i2, l1, l2);
	return (0);
}

int	test_equal_ptr(void *ptr1, void *ptr2, int i1, int i2)
{
	if (ptr1 == ptr2)
		return (1);
	printf("(%d, %d): pointers not equal: ptr1 = %p, ptr2 = %p\n", i1, i2, ptr1, ptr2);
	return (0);
}

int test_equal_array(char *array1, char *array2, size_t len, int i1, int i2)
{
	size_t	i;
	int 	ok;

	ok = 1;
	for (i = 0; i < len; i++)
	{
		if (array1[i] != array2[i])
		{
			printf("(%d, %d): arrays differ: array1[%lu] = %02x, array2[%lu] = %02x\n", i1, i2, i, array1[i], i, array2[i]);
			ok = 0;
			break ;
		}
	}
	return (ok);
}
