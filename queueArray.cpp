#include <iostream>

using namespace std;

class que
{
    int frnt, rear;
    int *arr, s;
public:
    que(int x)
    {
        frnt = -1;
        rear = frnt;
        s = x;
        arr = new int[s];
    }
    void insertion(int x)
    {
        if(frnt == rear && frnt == -1)
        {
            rear = rear + 1;
            arr[rear] = x;
            frnt = 0;
        }
        else
        {
            if (rear == s - 1)
            {
                cout << "Array size overflow";
                return;
            }
            else
            {
                rear = rear + 1;
                arr[rear] = x;
            }
        }
    }
    void deletion()
    {
        if(frnt == -1)
        {
            cout << "Underflow";
            return;
        }
        else
        {
            int temp = arr[frnt];
            frnt = frnt + 1;
            return;
        }
    }
};

int main()
{
    que q(5);
    q.insertion(1);
    q.insertion(2);
    q.insertion(3);
    q.insertion(4);
    q.insertion(5);
    q.insertion(6);
}
