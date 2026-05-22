#ifndef LIBFT_SORT_H
#define LIBFT_SORT_H

#include <stddef.h>

void ft_qsort(void* base, size_t nitems, size_t size, int (*cmp)(const void*, const void*));

#endif