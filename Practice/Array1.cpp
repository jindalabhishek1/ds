/*
Problem 1
1. Enter the size of an array.
2. Enter elements.
3. By mistake one value is left.
4. Now we you need to enter that value.
5. O/P will be sorted Array of defined size.
*/

#include <iostream>

using namespace std;

class Array
{
    int size;
    int *arr;
    public:
        Array()
        {
            cout << "Enter size of Array: ";
            cin >> size;
            arr = new int [size];
        }
        Array(int x)
        {
            size = x;
            arr = new int [size];
        }
        void get();
        void display();
        void sort();
        //Array replace(int, Array);
        void replace(int);
        int binarySearch(int, int, int);
        void deleteElement(int);
};

void Array::get()
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void Array::display()
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::sort()
{
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
Array Array::replace(int x, Array prev)
{
    Array a(size);
    if (x > arr[size - 1])
    {
        return prev;;
    }
    else
    {
        // Error in this loop. The if part is supposed to run only once.
        for (int i = 0, j = 0; i < size; i++, j++)
        {
            if (x < arr[j])
            {
                    a.arr[i] = x;
                    i ++;
            }
            a.arr[i] = arr[j];
        }
        return a;
    }
}
*/

void Array::replace(int x)
{
    Array a(size);
    if (x > arr[size - 1])
    {
        return;
    }
    else
    {
        int i;
        for (i = size - 2; ( i >= 0  && arr[i] > x); i--)
            arr[i+1] = arr[i];
        arr[i+1] = x;
    }
}

int Array::binarySearch(int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high)/2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch((mid + 1), high, key);
    return binarySearch(low, (mid -1), key);
}

/* Function to delete an element */
void Array::deleteElement(int key)
{
    // Find position of element to be deleted
    int pos = binarySearch(0, size - 1, key);

    if (pos == -1)
    {
        cout << "Element not found\n";
        return;
    }

    // Deleting element
    for (int i = pos; i < size; i++)
        arr[i] = arr[i + 1];

    size = size - 1;
}

int main(void)
{
    int num;
    Array a;
    a.get();
    a.sort();
    cout << "Enter the number you miss: ";
    cin >> num;
    //a = a.replace(num, a);
    a.replace(num);
    a.display();
    cout << "Enter the number you want to delete: ";
    cin >> num;
    a.deleteElement(num);
    a.display();
}
