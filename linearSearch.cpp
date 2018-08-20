#include <iostream>

using namespace std;

class Array
{
    int n, *arr, i, x;
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
        cin >> x;
    }
    void Find();
};

void Array::Find()
{
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Item found!!!\nPosition = " << i + 1;
    else
        cout << "Item not found!!!";
}

int main()
{
    Array a;
    a.Find();
}
