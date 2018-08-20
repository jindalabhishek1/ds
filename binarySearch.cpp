#include <iostream>
#include <math.h>

using namespace std;

class Array
{
    int n, *arr, i, x, m, count = 0, flag = 0;
public:
    Array()
    {
        cout << "Enter the size of array: ";
        cin >> n;
        arr = new int[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the element to search: ";
        i = 0;
        cin >> x;
    }
    void Find();
};

void Array::Find()
{
    while (i <= n)
    {
        m = (i + n - 1)/2;
        //cout << "m = " << m << ". arr[m] = " << arr[m] << ". count = " << ++count << endl;
        if (x == arr[m])
        {
            flag = 1;
            break;
        }
        else if (x > arr[m])
        {
            i = m + 1;
        }
        else
            n = m - 1;
    }
    if (flag == 1)
        cout << "Element found!!! :\) \nPosition : " << m + 1<< endl;
    else
        cout << "Element not found!!! :\(";
}

int main()
{
    Array a;
    a.Find();
}
