#include <math.h>
#include <stdio.h>


void do_it(int N)
{
    int i;

    printf(" n n*n sqrt(n)\n");
    printf("-- --- -----------------\n");
    for(i = 1;i <= N;i++)
        printf("%2d %3d %17.15f\n",i,i * i,sqrt((double)i));
}

int main(void)
{
    do_it(50);
    return 0;
}
