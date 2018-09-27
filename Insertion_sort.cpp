#include <iostream>

using namespace std;

class Insert_sort
{
    int size;
    int *arr;
public:
    Insert_sort()
    {
        cout << "Enter the size: ";
        cin >> size;
        arr = new int [size];
    }
    void get()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void sort()
    {
        int j, key;
        for (int i = 1; i < size; i++)
        {
            j = i - 1;
            key = arr[i];
            while (j >= 0 && arr[j] > arr[i])
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
            //show();
        }
    }
    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(void)
{
    Insert_sort i;
    i.get();
    i.sort();
    i.show();
}
