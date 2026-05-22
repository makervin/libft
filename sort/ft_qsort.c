#include "libft.h"

static void swap(char* a, char* b, size_t size)
{
    while (size--) {
        char tmp = *a;
        *a++     = *b;
        *b++     = tmp;
    }
}

static int
partition(char* base, int low, int high, size_t size, int (*cmp)(const void*, const void*))
{
    char* pivot = base + high * size;
    int   i     = low - 1;

    for (int j = low; j < high; j++) {
        char* elem = base + j * size;

        if (cmp(elem, pivot) < 0) {
            i++;
            swap(base + i * size, elem, size);
        }
    }

    swap(base + (i + 1) * size, pivot, size);

    return i + 1;
}

/* Recursive quicksort */
static void
qsort_r(char* base, int low, int high, size_t size, int (*cmp)(const void*, const void*))
{
    if (low < high) {
        int p = partition(base, low, high, size, cmp);

        qsort_r(base, low, p - 1, size, cmp);
        qsort_r(base, p + 1, high, size, cmp);
    }
}

void ft_qsort(void* base, size_t nitems, size_t size, int (*cmp)(const void*, const void*))
{
    if (nitems < 2)
        return;

    qsort_r((char*)base, 0, (int)nitems - 1, size, cmp);
}