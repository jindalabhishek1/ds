#include <iostream>

using namespace std;

class que
{
    int front, rear;
    int *arr, s;
public:
    que(int x)
    {
        front = -1;
        rear = front;
        s = x;
        arr = new int[s];
    }
    void insertion(int x)
    {
        if(front == rear && front == -1)
        {
            rear = rear + 1;
            arr[rear] = x;
            front = 0;
        }
        else
        {
            if (rear == s - 1)
            {
                cout << "Array size overflow\n";
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
        if(front == -1)
        {
            cout << "Underflow\n";
            return;
        }
        else
        {
            int temp = arr[frnt];
            front = front + 1;
            return;
        }
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
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
    cout << "Queue before deletion\n";
    q.display();
    q.deletion();
    cout << "Queue after deletion\n";
    q.display();
}
