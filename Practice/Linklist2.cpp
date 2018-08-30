// Program to match two Link lists.

#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class linklist
{
    struct Node *start;
    int size;
    public:
        linklist()
        {
            start = NULL;
            size = 0;
        }
        void insert();
        void compare(linklist);
};

void linklist::insert()
{
    char ch;
    int num;
    do
    {
        cout << "Enter 'e' for enter data or '@' to stop : ";
        cin >> ch;
        if (ch == 'e')
        {
            cout << "Enter the data : ";
            cin >> num;
            struct Node *new_node = new Node();
            struct Node *last = start;
            new_node->data = num;
            new_node->next = NULL;
            if (start == NULL)
            {
                start = new_node;
            }
            else
            {
                while (last->next != NULL)
                    last = last->next;
                last->next = new_node;
            }
            size ++;
        }
    }
    while (ch != '@');
}

void linklist::compare(linklist l)
{
    int flag = 1;
    struct Node *node1 = start;
    struct Node *node2 = l.start;
    if (size == l.size)
    {
        while (node1 != NULL || flag != 0)
        {
            if (node1->data != node2->data)
            {
                flag = 0;
            }
            node1 = node1->next;
            node2 = node2->next;
        }
    }
    else
    {
        flag = 0;
    }
    if (flag)
    {
        cout << "\nLinkLists are same.\n";
    }
    else
    {
        cout << "\nLinkLists are not same.\n";
    }
}

int main(void)
{
    linklist first, second;
    cout << "\nInsertion in first linklint:\n";
    first.insert();
    cout << "\nInsertion in second linklist\n";
    second.insert();
    first.compare(second);
    return 0;
}
