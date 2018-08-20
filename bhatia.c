#include <stdio.h>
#include<math.h>
int main()
{
    int number, sum = 0, remainder, count,j=0,n,a[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
	sum=0;
	j=0;
    while (a[i])
    {
        remainder = a[i]% 10;
        sum  = sum + (remainder + 1)*pow(10,j++);
        a[i] /= 10;
    }
    printf("%d\n", sum);}
    return 0;
}
