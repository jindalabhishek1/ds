#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, r, temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        temp = arr[i];
        int j = 0;
        int no = 0;
        while(temp != 0)
        {
            r = temp % 10;
            r = r + 1;
            //printf("\n (int)(pow(10, %d)) = %d", j, (pow(10, j)));
           // printf("\n (int)(pow(10, %d) * %d) = %d", j, r,(pow(10, j) * r));
           // printf("\n (int)((pow(10, %d) * %d) + %d) = %d", j, r, no, ((pow(10, j) * r) + no));
            //printf(" no = (int)((pow(10, %d) * %d) + %d)\n", j, r, no);
            no = (int)(pow(10, j++) + 0.5) * r + no;
            printf("\n**%d**\n", no);
            temp = temp / 10;
        }
        arr[i] = no;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t", arr[i]);
    }
}
