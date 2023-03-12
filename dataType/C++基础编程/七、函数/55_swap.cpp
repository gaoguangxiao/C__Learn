#include "55_swap.h"

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}