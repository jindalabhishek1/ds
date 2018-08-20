#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 0; i < 3; i++)
        printf("%d\n", (int)pow(10, i)*3 + 2);
    //printf("%d", pow(10, 2));
}
