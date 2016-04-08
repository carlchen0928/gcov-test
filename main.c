#include <stdio.h>
#include "calc_mean.h"
#include "calc_sum.h"
#include "calc_mult.h"

void inline say(int p)
{
    if (p == 1)
        printf("true\n");
    else
        printf("false\n");
}

int main() 
{
    double v1, v2, m;
    v1 = 5.2;
    v2 = 7.9;

    m = mean(v1, v2);

    printf("The mean of %3.2f and %3.2f is %3.2f\n", v1, v2, m);
    
    int a1, a2, s;
    a1 = 10;
    a2 = 20;

    s = sum(a1, a2);

    printf("The sum of %d and %d is %d\n", a1, a2, s);

    s = mult(a1, a2);

    printf("The mult of %d and %d is %d\n", a1, a2, s);


    say(1);

    return 0;
}
