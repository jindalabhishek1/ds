#include <iostream>

using namespace std;

void Quick(int arr[], int n, int beg, int end, int *loc)
{
    int temp, left = 0, rigth = n -1;
    loc = beg;
    while (left == right)
    {
        while(*loc < arr[right] && loc != right)
        {
            right--;
            if (*loc >= a[right])
            {
                temp = *loc;
                *loc = a[right];
                a[right] = temp;
                loc = right;
            }
        }
        while (a[left] < *loc && loc != left)
        {
            left++;
            if (a[left] >= *loc)
            {
                temp = *loc;
                *loc = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }
}

void QuickSort(int a[], int n)
{
    int lower[10], right[10], top = -1;
    int beg, end;
    if (n > 1)
    {
        top ++;
        lower[top] = 0;
        upper[top] = n - 1;
    }
    while (top != -1)
    {
        beg = lower[top];
        end = upper[top];
        top--;
        Quick(a[], n, beg, end, loc)
        if(beg < loc -1)
        {
            top++;
            lower[top] = beg;
            upper[top] = loc - 1;
        }
        if(loc + 1 < end)
        {
            top++;
            lower[top] = loc + 1;
            upper[top] = end;
        }
    }
}
