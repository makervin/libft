#include <assert.h>
#include <string.h>

#include "libft.h"

/* ---------- Comparators ---------- */

int int_cmp(const void *a, const void *b)
{
    int ia = *(const int *)a;
    int ib = *(const int *)b;

    return (ia > ib) - (ia < ib);
}

int str_cmp(const void *a, const void *b)
{
    const char *sa = *(const char * const *)a;
    const char *sb = *(const char * const *)b;

    return strcmp(sa, sb);
}

/* ---------- Tests ---------- */

static void test_sorted_ints(void)
{
    int arr[] = {1, 2, 3, 4, 5};

    ft_qsort(arr, 5, sizeof(int), int_cmp);

    for (int i = 0; i < 5; i++) {
        assert(arr[i] == i + 1);
    }
}

static void test_reverse_ints(void)
{
    int arr[] = {5, 4, 3, 2, 1};
    int expected[] = {1, 2, 3, 4, 5};

    ft_qsort(arr, 5, sizeof(int), int_cmp);

    for (int i = 0; i < 5; i++) {
        assert(arr[i] == expected[i]);
    }
}

static void test_duplicates(void)
{
    int arr[] = {4, 2, 4, 1, 2, 1};
    int expected[] = {1, 1, 2, 2, 4, 4};

    ft_qsort(arr, 6, sizeof(int), int_cmp);

    for (int i = 0; i < 6; i++) {
        assert(arr[i] == expected[i]);
    }
}

static void test_single_element(void)
{
    int arr[] = {42};

    ft_qsort(arr, 1, sizeof(int), int_cmp);

    assert(arr[0] == 42);
}

static void test_empty_array(void)
{
    int arr[1] = {0};

    ft_qsort(arr, 0, sizeof(int), int_cmp);

    assert(arr[0] == 0);
}

static void test_strings(void)
{
    const char *arr[] = {
        "orange",
        "apple",
        "banana",
        "grape"
    };

    const char *expected[] = {
        "apple",
        "banana",
        "grape",
        "orange"
    };

    ft_qsort(arr, 4, sizeof(char *), str_cmp);

    for (int i = 0; i < 4; i++) {
        assert(strcmp(arr[i], expected[i]) == 0);
    }
}

int main(void)
{
    test_sorted_ints();
    test_reverse_ints();
    test_duplicates();
    test_single_element();
    test_empty_array();
    test_strings();

    printf("All tests passed!\n");

    return 0;
}