#include <stdio.h>
int main()
{
    int a = 8;
    int b = 10;
    int ans = a += b; /* int ans = a = a +b;*/
    printf("Answer: %d \n", ans);

    return 0;
}