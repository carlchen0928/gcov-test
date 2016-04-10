#include "calc_sum.h"
#include <stdio.h>
extern int mult(int, int);

int sum(int a, int b)
{
    int res = mult(11, 22);
    printf("11 * 22 = %d\n", res);

    return a + b;
}
