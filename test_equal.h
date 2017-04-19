#ifndef TEST_EQUAL_H
# define TEST_EQUAL_H

int	test_equal_long(long l1, long l2, int i1, int i2);
int	test_equal_ptr(void *ptr1, void *ptr2, int i1, int i2);
int test_equal_array(char *array1, char *array2, size_t len, int i1, int i2);

#endif