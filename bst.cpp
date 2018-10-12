#include <iostream>

using namespace std;

class tree
{
    int *arr;
    int size, flag = 1, root = 0;
public:
    tree(int size)
    {
        this.size = size;
        arr = new int [size];
    }
    void add(int num)
    {
        if arr[root] == NULL)
        {
            arr[root] = num;
            return;
        }
        while (flag)
        {
            if (num < arr[root])
            {
                t = (2 * root) + 1;
            }
            else
            {
                t = (2 * root) + 2;
            }
            if(arr[t] == NULL)
            {
                flag = 0;
            }
            root = t;
        }
        arr[root] = num;
    }

}
