#include <iostream>

using namespace std;

class Array
{
    int *arr, n, i, x;
public:
    Array()
    {
        cout << "Enter size:";
        cin >> n;
        arr = new int[n];
        for (i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        cout << "Enter the number to insert:";
        cin >> x;
    }
    void insertAtBegin();
    void insertAtEnd();
    void show();
};

void Array::insertAtBegin()
{
    n = n + 1;
    for (i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i+1] = x;
}

void Array::insertAtEnd()
{
    n = n + 1;
    //cout<<n;
    arr[n-1] = x;
}

void Array::show()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    Array a;
    a.insertAtBegin();
    a.insertAtEnd();
    a.show();
}
