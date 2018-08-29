// Program to find the mid of linklist.

#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **head_ref, int data)
{
    struct Node *new_node = new Node();
    struct Node *last = *head_ref;
    new_node->data = data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
}

void display(struct Node *head, int count)
{
    struct Node *temp = head;
    int pos;
    if ((count % 2) == 0)
    {
        pos = count / 2;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
    }
    else
    {
        pos = (count / 2) + 1;
        for (int i = 0; i < (count/2); i++)
        {
            temp = temp->next;
        }
    }
    cout << "Total Nodes = " << count << endl;
    cout << "Mid node is at position = " << pos << endl;
    cout << "Data of mid node = " << temp->data << endl;
}

int main(void)
{
    struct Node *start = NULL;
    char ch;
    int num, count = 0;
    do
    {
        cout << "Enter 'e' for enter data or '@' to stop : ";
        cin >> ch;
        if (ch == 'e')
        {
            cout << "Enter the data : ";
            cin >> num;
            insert(&start, num);
            count ++;
        }
    }
    while (ch != '@');
    display(start, count);
    return 0;
}
